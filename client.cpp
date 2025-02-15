#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "service.pb.h"
#include "service.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using example::Greeter;
using example::Request;
using example::Reply;

class GreeterClient {
public:
    GreeterClient(std::shared_ptr<Channel> channel)
        : stub_(Greeter::NewStub(channel)) {}

    int SayNumbers(int a, int b,int op) {
        Request request;

        request.set_a(a);
        request.set_b(b);
        request.set_op(op);

        Reply reply;
        ClientContext context;

        Status status = stub_->SayNumbers(&context, request, &reply);
        if (status.ok()) {
            return reply.result();
        } else {
            return 0;
        }
    }

private:
    std::unique_ptr<Greeter::Stub> stub_;
};

int main() {
    GreeterClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    int a, b, op;
    std::cout << "Ввелите 2 числа и операцию (1(+), 2(-), 3(*), 4(/)): ";
    std::cin >> a >> b >> op;
    
    int result = client.SayNumbers(a, b, op);
    std::cout << "Ответ: " << result << std::endl;
    return 0;
}

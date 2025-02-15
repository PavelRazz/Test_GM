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

    int SayNumbers(int64_t a, int64_t b,int64_t op, std::string& errormessage) {
        Request request;

        request.set_a(a);
        request.set_b(b);
        request.set_op(op);

        Reply reply;
        ClientContext context;

        Status status = stub_->SayNumbers(&context, request, &reply);
        //обработка ошибок(деление на 0 и неверный ввод)
        if (status.ok()) {
            return reply.result();
        } else {
            errormessage=status.error_message();
            return 0;
        }
    }

private:
    std::unique_ptr<Greeter::Stub> stub_;
};

int main() {
    GreeterClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    int64_t a, b, op;
    std::cout << "Введите 2 числа и операцию (1(+), 2(-), 3(*), 4(/)): ";
    std::cin >> a >> b >> op;
 
    std::string errormessage;

    int64_t result = client.SayNumbers(a, b, op, errormessage);

    if (errormessage.empty()) {
        std::cout << "Ответ: " << result << std::endl;
    } else {
        std::cerr << "Ошибка: " << errormessage << std::endl;
    }
    return 0;
}

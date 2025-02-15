#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "service.pb.h"
#include "service.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using example::Greeter;
using example::Request;
using example::Reply;

class GreeterServiceImpl final : public Greeter::Service {
public:
    Status SayNumbers(ServerContext* context, const Request* request, Reply* reply) override {
        int a = request->a();
        int b = request->b();
        int op = request->op();
        int result = 0;
        switch(op){
            case 1: result = a + b;break;
            case 2: result = a - b;break;
            case 3: result = a * b;break;
            case 4: result = a / b;break;
            default:
                return Status(grpc::INVALID_ARGUMENT, "Не верная операция");
        }
        reply->set_result(result);
        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    GreeterServiceImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}

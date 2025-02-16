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
        int64_t a = request->a();
        int64_t b = request->b();
        int64_t op = request->op();
        int64_t result = 0;
        //Каждая цифра  отвечает за операцию, 1 сложение, 2 вычитание, 3 умножение, 4 деление
        switch(op){
            case 1: result = a + b; break;
            case 2: result = a - b; break;
            case 3: result = a * b; break;
            case 4: 
                if (b == 0) return Status(grpc::INVALID_ARGUMENT, "Деление на ноль");//проверка деления на 0 
                result = a / b; 
                break;
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

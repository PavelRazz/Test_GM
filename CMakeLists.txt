cmake_minimum_required(VERSION 3.22)
project(grpc_example)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GRPC REQUIRED grpc)

include_directories(${GRPC_INCLUDE_DIRS})
link_directories(${GRPC_LIBRARY_DIRS})
add_definitions(${GRPC_CFLAGS_OTHER})

find_package(Protobuf REQUIRED)

find_package(absl REQUIRED)

add_executable(server server.cpp service.grpc.pb.cc service.pb.cc)
target_link_libraries(server grpc++ grpc protobuf absl::base)

add_executable(client client.cpp service.grpc.pb.cc service.pb.cc)
target_link_libraries(client grpc++ grpc protobuf absl::base)
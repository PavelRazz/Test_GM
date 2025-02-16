cmake_minimum_required(VERSION 3.22)
project(grpc_example)

# Поиск gRPC и Protobuf
find_package(PkgConfig REQUIRED)
pkg_check_modules(GRPC REQUIRED grpc)
find_package(Protobuf REQUIRED)
find_package(absl REQUIRED)

# Указание путей
set(SERVER_SOURCE /root/grps/src/server.cpp)
set(CLIENT_SOURCE /root/grps/src/client.cpp)
set(PROTO_SOURCES /root/grps/generated/service.grpc.pb.cc /root/grps/generated/service.pb.cc)

# Добавление исполняемых файлов
add_executable(server ${SERVER_SOURCE} ${PROTO_SOURCES})
add_executable(client ${CLIENT_SOURCE} ${PROTO_SOURCES})

# Линковка библиотек
target_link_libraries(server grpc++ grpc protobuf absl::base)
target_link_libraries(client grpc++ grpc protobuf absl::base)

# Включение директорий
include_directories(${GRPC_INCLUDE_DIRS} /root/grps/generated)
link_directories(${GRPC_LIBRARY_DIRS})
add_definitions(${GRPC_CFLAGS_OTHER})
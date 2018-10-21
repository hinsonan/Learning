cmake_minimum_required(VERSION 3.5)

set (CMAKE_CXX_STANDARD 11)

find_package(Protobuf REQUIRED)

Protobuf_GENERATE_CPP(PROTO_SRCS PROTO_HDRS 
    dog.proto
)
add_library(protos ${PROTO_HDRS} ${PROTO_SRCS})

target_include_directories(protos
    PUBLIC
    ${PROTOBUF_INCLUDE_DIRS}
    ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(protos 
    PUBLIC
    ${PROTOBUF_LIBRARIES}
)
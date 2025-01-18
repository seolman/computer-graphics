cmake_minimum_required(VERSION 3.15)

PROJECT(CG VERSION 0.1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS On)

add_subdirectory(glfw)
add_subdirectory(webgpu)
add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE webgpu glfw)

target_copy_webgpu_binaries(${PROJECT_NAME})

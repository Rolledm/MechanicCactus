cmake_minimum_required(VERSION 3.9)
project(RolePlay)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_NAME "myproject")
add_executable(${EXECUTABLE_NAME} main.cpp src/fundamental/Texture.cpp src/map/Entity.cpp src/map/MapArray.cpp src/map/Node.cpp src/map/PathNode.cpp src/map/TextureHolder.cpp src/map/TextureTypesDistributor.cpp
    src/tools/Logger.cpp src/map/MapRenderer.cpp)

target_link_libraries(myproject sfml-graphics sfml-window sfml-system)
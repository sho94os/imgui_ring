

cmake_minimum_required (VERSION 3.12)

project(imgu_ring)

set(SDL2_ROOT     "C:/SDL2")     
set(SDL2_Includes "${SDL2_ROOT}/include")
set(SDL2_LibDir   "${SDL2_ROOT}/lib/x86")



include_directories("C:/ring/ring/language/include" imgui ${SDL2_Includes})

link_directories("C:/ring/ring/lib" ${SDL2_LibDir})

file(GLOB SOURCES "mylib.cpp" "imgui/*.cpp")

# add_library(R_IMGUI_Lib STATIC ${SOURCES})    # it work
add_library(${PROJECT_NAME} SHARED ${SOURCES})   

target_link_libraries(${PROJECT_NAME}  ring SDL2main SDL2)





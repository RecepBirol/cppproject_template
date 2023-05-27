
add_library(samplelib samplelib.cpp)

add_library(myproject::samplelib ALIAS samplelib)

target_include_directories(samplelib PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)

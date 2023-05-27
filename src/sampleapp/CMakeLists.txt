add_executable(sampleapp main.cpp)

target_link_libraries(
    sampleapp
    PRIVATE
    myproject::samplelib)
add_executable(samplelib_ut samplelib_ut.cpp)

target_link_libraries(samplelib_ut PRIVATE
    gtest
    gmock
    gtest_main
    myproject::samplelib)

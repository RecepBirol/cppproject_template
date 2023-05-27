#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <samplelib/samplelib.hpp>

TEST(SampleLibFactorialTest, HandleZeroInput) {
    ASSERT_EQ(myproject::samplelib::factorial(0), 1);
}
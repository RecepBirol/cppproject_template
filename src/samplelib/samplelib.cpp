/**
 * @file samplelib.cpp
 * @author Recep Birol GUL (recepgul@siemens.com)
 * @version 0.1
 * @date 2023-05-26
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <samplelib/samplelib.hpp>

namespace myproject::samplelib {
    void say_hello() {
        std::cout << "Hello from sample lib!\n";
    }

    int factorial(int i) noexcept {
        int res = 1;
        while (i > 0) {
            res *= i;
            --i;
        }
        return res;
    }
} // namespace myproject::samplelib
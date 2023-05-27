#include <iostream>
#include <samplelib/samplelib.hpp>

int main() {
    myproject::samplelib::say_hello();
    auto res = myproject::samplelib::factorial(5);
    std::cout << "factorial of " << 5 << " is " << res << '\n';
    return EXIT_SUCCESS;
}
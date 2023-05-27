#include <fmt/format.h>
#include <iostream>
#include <samplelib/samplelib.hpp>
#include <string>

int main() {
    myproject::samplelib::say_hello();
    auto res = myproject::samplelib::factorial(5);
    std::cout << "factorial of " << 5 << " is " << res << '\n';
    std::string name{};
    std::cin >> name;
    std::cout << fmt::format("Hello {}\n", name);
    return EXIT_SUCCESS;
}
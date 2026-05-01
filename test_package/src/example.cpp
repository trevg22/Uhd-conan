#include <uhd/version.hpp>
#include <iostream>

int main() {
    std::cout << "UHD Version: " << uhd::get_version_string() << std::endl;
    return 0;
}

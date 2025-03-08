#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    getline(std::cin, name);

    if (name.length() >= 3) {
        std::cout << "Hello, " << name << "!" << std::endl;
    } else {
        std::cout << "Your name must be at least three characters long." << std::endl;
    }

    return 0;
}

// This is a C++ program that generates a random number between 1 and 100
#include <iostream>
using namespace std;
int main() {
    int random = rand() % 100 + 1;
    cout << "The random number is: " << random << endl;
    return 0;
}

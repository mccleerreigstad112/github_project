// Generating a random C++ code snippet using std::random_device and std::uniform_int_distribution

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed with time
    srand(time(0));

    // Generate a random integer between 1 and 10
    int randomNumber = rand() % 10 + 1;

    cout << "The random number is: " << randomNumber << endl;

    return 0;
}

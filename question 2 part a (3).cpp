#include <iostream>

// (iii) Loops

void demonstrateLoops() {
    // For loop
    for (int i = 0; i < 10; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // While loop
    int j = 0;
    while (j < 10) {
        std::cout << j << " ";
        j++;
    }
    std::cout << std::endl;

}
int main() {
    std::cout << "\nLoops example:" << std::endl;
    demonstrateLoops();
}
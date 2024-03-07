#include <iostream>

inline void voidTest() {
    std::cout << "Ця функція була викликана." << std::endl;
}

inline int cycle() {
    int sum = 0;
    for (int i = 0; i <= 5000; i++){
        sum += i;
    }
    return sum;
}

inline int recursion(int n) {
    return (n > 1) ? n * recursion(n-1) : 1;
}

inline void switchTest(int const x) {
    switch (x){
    case 1:
        std::cout << "3,14159265358979" << std::endl;
        break;
    case 2:
        std::cout << "2,71828182845905" << std::endl;
        break;
    default:
        std::cout << "Error" << std::endl;
    }
}

int main() {
    voidTest();
    std::cout << cycle() << std::endl;
    std::cout << recursion(4) << std::endl;
    switchTest(2);
    return 0;
}
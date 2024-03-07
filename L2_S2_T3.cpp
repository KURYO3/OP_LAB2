#include <iostream>

union swapBytes {
    int64_t i;
    struct {
        uint32_t lower;
        uint32_t upper;
    } bytes;
};

int main() {
    swapBytes sb;
    sb.i = 0x123456789ABCDEF0; // Приклад 64-бітного числа

    std::cout << "Оригінальне число: " << std::hex << sb.i << std::endl;

    // Обмінюємо старші та молодші байти
    uint32_t temp = sb.bytes.lower;
    sb.bytes.lower = sb.bytes.upper;
    sb.bytes.upper = temp;

    std::cout << "Число після обміну байтами: " << std::hex << sb.i << std::endl;

    return 0;
}

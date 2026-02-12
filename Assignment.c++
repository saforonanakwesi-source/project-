#include <iostream>
#include <iomanip>

int main() {
    double celsius = 0.0;
    std::cout << "Enter temperature in Celsius: ";
    if (!(std::cin >> celsius)) {
        std::cerr << "Invalid input\n";
        return 1;
    }

    double fahrenheit = (celsius * 1.8) + 32;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << celsius << "°C is equal to " << fahrenheit << "°F\n";

    if (celsius < 0) {
        std::cout << "Freezing!\n";
    } else if (celsius > 30) {
        std::cout << "Hot!\n";
    }

    return 0;
}
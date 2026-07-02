#include <iostream>
#include <cstdlib>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;

    int result1, result2;
    result1 = x1 - x2;
    result2 = y1 - y2;

    if (result1 < 0) {
        for (int i = 0; i < std::abs(result1); ++i) {
            std::cout << "E";
        }
    } else if (result1 > 0) {
        for (int i = 0; i < std::abs(result1); ++i) {
            std::cout << "W";
        }
    }

    if (result2 < 0) {
        for (int i = 0; i < std::abs(result2); ++i) {
            std::cout << "N";
        }
    } else if (result2 > 0) {
        for (int i = 0; i < std::abs(result2); ++i) {
            std::cout << "S";
        }
    }
    return 0;
}

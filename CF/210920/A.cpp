#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++)
                std::cout << "()";
            for (int j = 1; j <= i; j++)
                std::cout << '(';
            for (int j = 1; j <= i; j++)
                std::cout << ')';
            std::cout << std::endl;
        }
    }
    return 0;
}
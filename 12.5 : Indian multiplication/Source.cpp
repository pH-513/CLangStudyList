#include <iostream>

void Indian_multiplication(int first, int second);

int main() {
    using namespace std;
    int first, second;
    
    cout << "첫번째 피연산자 입력 : "; cin >> first;
    cout << "두번째 피연산자 입력 : "; cin >> second;
    
    for (int i = 99; i >= second; --i)
    {
        Indian_multiplication(first, i);
    }

    return 0;
}

void Indian_multiplication(int first, int second)
{
    int tmp1, tmp2;

    if (first >= 100) {
        if (second >= 100) {
            std::cerr << "Error: Values are too large." << std::endl;
            return; // Terminate the function without an error code
        }
    }

    // Subtract each other from 100.
    tmp1 = 100 - first; tmp2 = 100 - second;

    // Find the number of digits in 1000 and 100.
    int tmp = tmp1 + tmp2;  int x = (100 - tmp) * 100;

    // Find the number of digits that will fit in 10 and 1.
    int y = tmp1 * tmp2;

    // Add the number of digits in 1000 and 100, and the number of digits in 10 and 1.
    std::cout << first << " × " << second << " = " << x + y << std::endl;
}

// --------------------------------------------------------

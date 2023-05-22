#include <iostream>
#include <Windows.h> 
using namespace std;

bool isLuckyNumber(int number) {
    int sum1 = 0;
    int sum2 = 0;

    
    for (int i = 0; i < 6; i++) {
        int digit = number % 10;
        number /= 10;

        if (i < 3) {
            sum1 += digit;
        }
        else {
            sum2 += digit;
        }
    }

    return sum1 == sum2;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;

    cout << "Введіть шестизначне число: ";
    cin >> number;

    if (number >= 100000 || number < 1000000) {
        if (isLuckyNumber(number)) {
            cout << "Це щасливе число!" << endl;
        }
        else {
            cout << "Це не щасливе число." << endl;
        }
    }
    else {
        cout << "Помилка! Введіть шестизначне число." << endl;
    }

    return 0;
}
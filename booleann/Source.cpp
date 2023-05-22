#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;

    cout << "Введіть чотиризначне число: ";
    cin >> number;

    if (number >= 1000 && number < 10000) {
        int digit1 = number / 1000;  
        int digit2 = (number / 100) % 10;  
        int digit3 = (number / 10) % 10;  
        int digit4 = number % 10;  

        cout << "Введене число: " << number << endl;
        cout << "Змінене число: " << digit2 << digit1 << digit4 << digit3 << endl;
    }
    else {
        cout << "Помилка! Введіть чотиризначне число." << endl;
    }

    return 0;
}
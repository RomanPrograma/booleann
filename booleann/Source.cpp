#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numbers[7];

    cout << "������ 7 ����� �����:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "����� " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int maxNumber = numbers[0];  

    
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "����������� �����: " << maxNumber << endl;

    return 0;
}
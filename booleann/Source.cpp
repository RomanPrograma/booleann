#include <iostream>
using namespace std;
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Ukrainian");
    const int FUEL_C = 300;  
    const int FUEL_CONSUMPTION_500 = 1; 
    const int FUEL_CONSUMPTION_1000 = 4;  
    const int FUEL_CONSUMPTION_1500 = 7; 
    const int FUEL_CONSUMPTION_2000 = 9; 

    int distance_AB, distance_BC, cargo_weight;

    cout << "������ ������� �� �������� � � � (� ��): ";
    cin >> distance_AB;

    cout << "������ ������� �� �������� � � � (� ��): ";
    cin >> distance_BC;

    cout << "������ ���� ������� (� ��): ";
    cin >> cargo_weight;

    int fuel_consumption;
    if (cargo_weight <= 500) {
        fuel_consumption = FUEL_CONSUMPTION_500;
    }
    else if (cargo_weight <= 1000) {
        fuel_consumption = FUEL_CONSUMPTION_1000;
    }
    else if (cargo_weight <= 1500) {
        fuel_consumption = FUEL_CONSUMPTION_1500;
    }
    else if (cargo_weight <= 2000) {
        fuel_consumption = FUEL_CONSUMPTION_2000;
    }
    else {
        cout << "��������� ������ ������ ����� �� 2000 ��. ������ ����������." << endl;
        return 0;
    }

    int required_fuel_AB = distance_AB * fuel_consumption;
    int required_fuel_BC = distance_BC * fuel_consumption;
    int total_required_fuel = required_fuel_AB + required_fuel_BC;

    int fuel_to_refuel = total_required_fuel - FUEL_C;
    if (fuel_to_refuel > 0) {
        cout << "̳������� ������� ������ ��� ���������� � ����� �: " << fuel_to_refuel << " ����." << endl;
    }
    else {
        cout << "���������� �� �������";

    return 0;
}
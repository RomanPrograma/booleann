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

    cout << "Введіть відстань між пунктами А і В (в км): ";
    cin >> distance_AB;

    cout << "Введіть відстань між пунктами В і С (в км): ";
    cin >> distance_BC;

    cout << "Введіть вагу вантажу (в кг): ";
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
        cout << "Неможливо підняти вантаж більше ніж 2000 кг. Польот неможливий." << endl;
        return 0;
    }

    int required_fuel_AB = distance_AB * fuel_consumption;
    int required_fuel_BC = distance_BC * fuel_consumption;
    int total_required_fuel = required_fuel_AB + required_fuel_BC;

    int fuel_to_refuel = total_required_fuel - FUEL_C;
    if (fuel_to_refuel > 0) {
        cout << "Мінімальна кількість палива для дозаправки в пункті В: " << fuel_to_refuel << " літрів." << endl;
    }
    else {
        cout << "Дозаправка не потрібна";

    return 0;
}
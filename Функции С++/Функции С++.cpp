#include <iostream>
using namespace std;

double krug(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    setlocale(LC_ALL, "Russian");

    double radius_1, radius_2;

    cout << "Введите второй радиус: ";
    cin >> radius_1;

    cout << "Введите второй радиус: ";
    cin >> radius_2;

    double areaRing = krug(radius_1) - krug(radius_2);
    cout << "Вывод: " << areaRing << endl;
 
    return 0;
}
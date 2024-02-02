#include <iostream>
#include <cmath>

using namespace std;

double krug(double outerRadius, double innerRadius) {
    return 3.14 * (outerRadius * outerRadius - innerRadius * innerRadius);
}

int main() {

    setlocale(LC_ALL, "Russian");

    double outerRadius, innerRadius;

    cout << "Введите внешний радиус кольца: ";
    cin >> outerRadius;

    cout << "Введите внутренний радиус кольца: ";
    cin >> innerRadius;

  
    double a = krug(outerRadius, innerRadius);

    cout << "Площадь кольца: " << a << endl;

    return 0;
}

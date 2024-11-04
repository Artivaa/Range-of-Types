#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
 
    setlocale(LC_ALL, "Russian");

    cout << left << setw(15) << "Тип данных"
        << setw(30) << "Минимальное значение"
        << "Максимальное значение" << endl;
    cout << string(75, '-') << endl;

    // Целые числа
    cout << left << setw(15) << "int"
        << setw(30) << numeric_limits<int>::min()
        << numeric_limits<int>::max() << endl;

    cout << left << setw(15) << "unsigned int"
        << setw(30) << numeric_limits<unsigned int>::min()
        << numeric_limits<unsigned int>::max() << endl;

    cout << left << setw(15) << "short"
        << setw(30) << numeric_limits<short>::min()
        << numeric_limits<short>::max() << endl;

    cout << left << setw(15) << "unsigned short"
        << setw(30) << numeric_limits<unsigned short>::min()
        << numeric_limits<unsigned short>::max() << endl;

    cout << left << setw(15) << "long"
        << setw(30) << numeric_limits<long>::min()
        << numeric_limits<long>::max() << endl;

    cout << left << setw(15) << "unsigned long"
        << setw(30) << numeric_limits<unsigned long>::min()
        << numeric_limits<unsigned long>::max() << endl;

    // Числа с плавающей точкой
    cout << left << setw(15) << "float"
        << setw(30) << numeric_limits<float>::min()
        << numeric_limits<float>::max() << endl;

    cout << left << setw(15) << "double"
        << setw(30) << numeric_limits<double>::min()
        << numeric_limits<double>::max() << endl;

    cout << left << setw(15) << "long double"
        << setw(30) << numeric_limits<long double>::min()
        << numeric_limits<long double>::max() << endl;

    return 0;
}

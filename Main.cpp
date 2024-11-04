#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    cout << setw(20) << "Тип данных"
        << setw(25) << "Минимальное значение"
        << setw(25) << "Максимальное значение"
        << setw(20) << "Размер (байты)" << endl;

    cout << string(90, '-') << endl;

    cout << setw(20) << "bool"
        << setw(25) << (numeric_limits<bool>::min())
        << setw(25) << (numeric_limits<bool>::max())
        << setw(20) << sizeof(bool) << endl;

    cout << setw(20) << "short"
        << setw(25) << (numeric_limits<short>::min())
        << setw(25) << (numeric_limits<short>::max())
        << setw(20) << sizeof(short) << endl;

    cout << setw(20) << "int"
        << setw(25) << (numeric_limits<int>::min())
        << setw(25) << (numeric_limits<int>::max())
        << setw(20) << sizeof(int) << endl;

    cout << setw(20) << "long"
        << setw(25) << (numeric_limits<long>::min())
        << setw(25) << (numeric_limits<long>::max())
        << setw(20) << sizeof(long) << endl;

    cout << setw(20) << "long long"
        << setw(25) << (numeric_limits<long long>::min())
        << setw(25) << (numeric_limits<long long>::max())
        << setw(20) << sizeof(long long) << endl;

    cout << setw(20) << "float"
        << setw(25) << (numeric_limits<float>::lowest())
        << setw(25) << (numeric_limits<float>::max())
        << setw(20) << sizeof(float) << endl;

    cout << setw(20) << "double"
        << setw(25) << (numeric_limits<double>::lowest())
        << setw(25) << (numeric_limits<double>::max())
        << setw(20) << sizeof(double) << endl;

    cout << setw(20) << "long double"
        << setw(25) << (numeric_limits<long double>::lowest())
        << setw(25) << (numeric_limits<long double>::max())
        << setw(20) << sizeof(long double) << endl;

    return 0;
}

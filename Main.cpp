#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <cstdint>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    cout << setw(30) << "Тип данных"
        << setw(25) << "Минимальное значение"
        << setw(25) << "Максимальное значение"
        << setw(20) << "Размер (байты)" << endl;

    cout << string(100, '-') << endl;

    cout << setw(30) << "int"
        << setw(25) << (numeric_limits<int>::min())
        << setw(25) << (numeric_limits<int>::max())
        << setw(20) << sizeof(int) << endl;

    cout << setw(30) << "unsigned int"
        << setw(25) << (numeric_limits<unsigned int>::min())
        << setw(25) << (numeric_limits<unsigned int>::max())
        << setw(20) << sizeof(unsigned int) << endl;

    cout << setw(30) << "int8_t"
        << setw(25) << static_cast<int>(numeric_limits<int8_t>::min())
        << setw(25) << static_cast<int>(numeric_limits<int8_t>::max())
        << setw(20) << sizeof(int8_t) << endl;

    cout << setw(30) << "uint8_t"
        << setw(25) << static_cast<int>(numeric_limits<uint8_t>::min())
        << setw(25) << static_cast<int>(numeric_limits<uint8_t>::max())
        << setw(20) << sizeof(uint8_t) << endl;

    cout << setw(30) << "__int16"
        << setw(25) << (numeric_limits<int16_t>::min())
        << setw(25) << (numeric_limits<int16_t>::max())
        << setw(20) << sizeof(int16_t) << endl;

    cout << setw(30) << "unsigned __int16"
        << setw(25) << (numeric_limits<uint16_t>::min())
        << setw(25) << (numeric_limits<uint16_t>::max())
        << setw(20) << sizeof(uint16_t) << endl;

    cout << setw(30) << "__int32"
        << setw(25) << (numeric_limits<int32_t>::min())
        << setw(25) << (numeric_limits<int32_t>::max())
        << setw(20) << sizeof(int32_t) << endl;

    cout << setw(30) << "unsigned __int32"
        << setw(25) << (numeric_limits<uint32_t>::min())
        << setw(25) << (numeric_limits<uint32_t>::max())
        << setw(20) << sizeof(uint32_t) << endl;

    cout << setw(30) << "__int64"
        << setw(25) << (numeric_limits<int64_t>::min())
        << setw(25) << (numeric_limits<int64_t>::max())
        << setw(20) << sizeof(int64_t) << endl;

    cout << setw(30) << "unsigned __int64"
        << setw(25) << (numeric_limits<uint64_t>::min())
        << setw(25) << (numeric_limits<uint64_t>::max())
        << setw(20) << sizeof(uint64_t) << endl;

    cout << setw(30) << "short"
        << setw(25) << (numeric_limits<short>::min())
        << setw(25) << (numeric_limits<short>::max())
        << setw(20) << sizeof(short) << endl;

    cout << setw(30) << "unsigned short"
        << setw(25) << (numeric_limits<unsigned short>::min())
        << setw(25) << (numeric_limits<unsigned short>::max())
        << setw(20) << sizeof(unsigned short) << endl;

    cout << setw(30) << "long"
        << setw(25) << (numeric_limits<long>::min())
        << setw(25) << (numeric_limits<long>::max())
        << setw(20) << sizeof(long) << endl;

    cout << setw(30) << "unsigned long"
        << setw(25) << (numeric_limits<unsigned long>::min())
        << setw(25) << (numeric_limits<unsigned long>::max())
        << setw(20) << sizeof(unsigned long) << endl;

    cout << setw(30) << "long long"
        << setw(25) << (numeric_limits<long long>::min())
        << setw(25) << (numeric_limits<long long>::max())
        << setw(20) << sizeof(long long) << endl;

    cout << setw(30) << "unsigned long long"
        << setw(25) << (numeric_limits<unsigned long long>::min())
        << setw(25) << (numeric_limits<unsigned long long>::max())
        << setw(20) << sizeof(unsigned long long) << endl;

    return 0;
}

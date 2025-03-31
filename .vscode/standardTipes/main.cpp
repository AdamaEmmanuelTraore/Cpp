#include <iostream>
#include <limits>
#include <iomanip>

// Standard types
using namespace std;
int main()
{
    int width = 20;

    cout << setw(width) << "TIPO"
    << setw(width) << "BYTES"
    << setw(width) << "MIN"
    << setw(width) << "MAX" << endl;

    // int type
    cout << setw(width) << "int"
    << setw(width) << sizeof(int)
    << setw(width) << numeric_limits<int>::min()
    << setw(width) << numeric_limits<int>::max() << endl;

    // char type
    cout << setw(width) << "char"
    << setw(width) << sizeof(char)
    << setw(width) << (int) numeric_limits<char>::min()
    << setw(width) << (int) numeric_limits<char>::max() << endl;

    // float type
    cout << setw(width) << "float"
    << setw(width) << sizeof(float)
    << setw(width) << numeric_limits<float>::min()
    << setw(width) << numeric_limits<float>::max() << endl;

    // double type
    cout << setw(width) << "double"
    << setw(width) << sizeof(double)
    << setw(width) << numeric_limits<double>::min()
    << setw(width) << numeric_limits<double>::max() << endl;

    // boolean type
    cout << setw(width) << "bool"
    << setw(width) << sizeof(bool)
    << setw(width) << numeric_limits<bool>::min()
    << setw(width) << numeric_limits<bool>::max() << endl;

    return 0;
}
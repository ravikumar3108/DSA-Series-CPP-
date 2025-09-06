#include <iostream>
using namespace std;

int main()
{

    // Type Casting means change the data type into the other data type.
    // 1. Conversion[implicit] :- which means the data convert from lower to big data type.

    // ex -> float(4byte) to double(8byte)
    float PI = 3.14;

    double value = PI;
    char al = 'A';
    int valueAl = al;
    cout << PI << endl;
    cout << value << endl;   // this is the conversion
    cout << valueAl << endl; // this is the conversion

    // casting[explicit] ->
    // big to small type

    double num = 10.99;

    int replnum = (int)num;

    cout << replnum << endl;

    return 0;
}
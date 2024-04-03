#include <iostream>
#include <cmath>

using namespace std;

void binToDec(long binaryNumber, int &decimal, int &weight);

int main()
{

    int decimalNumber;
    int bitWeight;
    long binaryNumber;

    decimalNumber = 0;
    bitWeight = 0;

    cout << "Enter number in binary: ";
    cin >> binaryNumber;
    cout << endl;

    binToDec(binaryNumber, decimalNumber, bitWeight);
    cout << "Binary " << binaryNumber << " = " << decimalNumber << " decimal" << endl;

    return 0;
}

void binToDec(long binaryNumber, int &decimal, int &weight)
{
    int bit;

    if (binaryNumber > 0)
    {
        bit = binaryNumber % 10;

        decimal = decimal + bit * static_cast<int>(pow(2.0, weight));

        binaryNumber = binaryNumber / 10;

        weight++;

        binToDec(binaryNumber, decimal, weight);
    }
}
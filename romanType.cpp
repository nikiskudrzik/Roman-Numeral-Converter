#include <iostream>
#include "romanType.h"
using namespace std;

// starts with empty values
romanType::romanType()
{
    romanNumber = "";
    result = 0;
}

// saves the roman numeral and converts it
void romanType::setRoman(string r)
{
    romanNumber = r;
    convertToInt();
}

// gives the value of one roman numeral letter
int romanType::getValue(char letter)
{
    if (letter == 'M')
        return 1000;
    else if (letter == 'D')
        return 500;
    else if (letter == 'C')
        return 100;
    else if (letter == 'L')
        return 50;
    else if (letter == 'X')
        return 10;
    else if (letter == 'V')
        return 5;
    else if (letter == 'I')
        return 1;
    else
        return 0;
}

// turns the roman numeral into a number
void romanType::convertToInt()
{
    result = 0;

    for (int i = 0; i < romanNumber.length(); i++)
    {
        int current = getValue(romanNumber[i]);
        int next = 0;

        // look at next letter if there is one
        if (i + 1 < romanNumber.length())
        {
            next = getValue(romanNumber[i + 1]);
        }

        // if next is bigger then it subtracts
        if (current < next)
        {
            result = result - current;
        }
        else
        {
            result = result + current;
        }
    }
}

// prints the roman numeral
void romanType::printRoman() const
{
    cout << "Roman numeral: " << romanNumber << endl;
}

// prints the integer value
void romanType::printInt() const
{
    cout << "Integer value: " << result << endl;
}

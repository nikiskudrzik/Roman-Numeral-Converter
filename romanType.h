#ifndef ROMANTYPE_H
#define ROMANTYPE_H

#include <string>
using namespace std;

class romanType
{
private:
    string romanNumber;
    int result;

    int getValue(char letter);
    void convertToInt();

public:
    romanType();

    void setRoman(string r);
    void printRoman() const;
    void printInt() const;
};

#endif

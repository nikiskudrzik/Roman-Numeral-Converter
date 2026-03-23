#include <iostream>
#include <string>
#include "romanType.h"
using namespace std;

int main()
{
    romanType userRoman;
    string input;
    int choice;

    cout << "Enter a Roman numeral: ";
    cin >> input;

    userRoman.setRoman(input);

    cout << endl;
    cout << "What would you like to print?:" << endl;
    cout << "1. Roman numeral" << endl;
    cout << "2. Integer value" << endl;
    cout << "3. Both" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << endl;

    if (choice == 1)
    {
        userRoman.printRoman();
    }
    else if (choice == 2)
    {
        userRoman.printInt();
    }
    else if (choice == 3)
    {
        userRoman.printRoman();
        userRoman.printInt();
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
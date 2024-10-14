/* Wen Qian Zheng
Lab 5 Part 2
October 8th, 2024*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double data;
    int quality;

    cout << "How many Gigabytes of data do you have? "; // asks user how many gigabytes of data (prompt)
    cin >> data; // takes user input for data variable
    cout << "Music Quality\n[1] Low\n[2] Normal\n[3] High\n> "; // prompts user to pick between the options
    cin >> quality; // takes user input

    switch (quality)
    {
        case 1: // for case 1(input)
            cout << " > Low              " << fixed << setprecision(2) << (data * 1000) / 43.2 << " Hours" << endl; // calculates for low quality and outputs
            break;
        case 2: // for case 2(input)
            cout << " > Normal           " << fixed << setprecision(2) << (data * 1000) / 72 << " Hours" << endl; // calculates for normal quality and outputs
            break;
        case 3: // for case 3(input)
            cout << " > High             " << fixed << setprecision(2) << (data * 1000) / 115.2 << " Hours" << endl; // calculates for high quality and outputs
            break;
        default: // ""else"""
            cout << "Invalid input." << endl; // if they input anything else just break it!!!!
            break;
    }

    return 0;
}

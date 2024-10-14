/* Wen Qian Zheng
Lab 5 Part 1
October 8th, 2024*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int x = 0, y = 0; // sets both x and y coord to 0
    int direct;       // stores the directions

    // loop for 25 steps
    for (int i = 0; i < 25; ++i)
    {
        direct = rand() % 4 + 1;  // generates a random number between 1 and 4

        // for directions...
        switch (direct) {
            case 1:
                y += 1;  // move north
                // prints the current step number AND the position
                cout << "Step " << i + 1 << ": Moved North. Current position: (" << x << ", " << y << ")" << endl;
                break;
            case 2:
                y -= 1;  // move south
                // prints the current step number AND the position
                cout << "Step " << i + 1 << ": Moved South. Current position: (" << x << ", " << y << ")" << endl;
                break;
            case 3:
                x += 1;  // move east
                // prints the current step number AND the position
                cout << "Step " << i + 1 << ": Moved East. Current position: (" << x << ", " << y << ")" << endl;
                break;
            case 4:
                x -= 1;  // move west
                // prints the current step number AND the position
                cout << "Step " << i + 1 << ": Moved West. Current position: (" << x << ", " << y << ")" << endl;
                break;
        }
    }

    // Final output to show the total movement in terms of blocks North/South and East/West
    cout << "Final position: ";

    if (y > 0)  // if y is positive, print north
        cout << y << " blocks North, ";
    else if (y < 0)  // if y is negative, print south
        cout << -y << " blocks South, ";
    else  // if y is 0 = no movement north/south
        cout << "0 blocks North/South, ";

    if (x > 0)  // if x is positive, print east
        cout << x << " blocks East" << endl;
    else if (x < 0)  // if x is negative, print west
        cout << -x << " blocks West" << endl;
    else   // if y is 0 = no movement east/west
        cout << "0 blocks East/West" << endl;

    return 0; 
}

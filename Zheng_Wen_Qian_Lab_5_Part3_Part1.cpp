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
    int x = 0, y = 0; 
    int direct;

    for (int i = 0; i < 25; ++i)  // trials start at 0 and for every time the loop repeats without hitting 25, it appends 1 trial to 'i'
    {
        direct = rand() % 4 + 1;
        switch (direct) {
            case 1:
            y += 1;
                break; // North
            case 2:
            y -= 1;
                break;// South
            case 3:
            x += 1;
                break; // East
            case 4:
            x -= 1;
                break; // West
        }
    }

    cout << "Final position: ";
    if (y > 0) // if the y is more than 0, print North
        cout << y << " blocks North, ";
    else if (y < 0) // if the y is less than 0, print South
        cout << -y << " blocks South, ";
    else
        cout << "0 blocks North/South, "; // if its 0 then its either north or south

    if (x > 0) // if the x is less than 0, print East
        cout << x << " blocks East" << endl;
    else if (x < 0) // if the x is more than 0, print West
        cout << -x << " blocks West" << endl;
    else
        cout << "0 blocks East/West" << endl; // if its 0 then its either east or west

    return 0;
}

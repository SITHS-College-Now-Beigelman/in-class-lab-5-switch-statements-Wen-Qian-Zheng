// Wen Qian Zheng
// Lab 5 Part 1
// September 23rd. 2024

#include <iostream>
#include <iomanip> // controls the trailing decimal place counts
using namespace std;

int main()
{
    double duration, weight; // calling variables with trailing two decimal places
    int prompt, exercise;

    cout << "Would you like to...\n[1] See calorie burning TABLE for weight and duration\n[2] See calorie burn for SPECIFIC exercise\n\n> ";
    cin >> prompt; // Initialize the prompt variable

    switch(prompt)
    {
        case 1:
            cout << "\nWhat is your exercise duration in minutes? (m)\n> "; // prompt requesting for exercise duration
            cin >> duration; // requests user input for variable duration and exercise durations
            cout << "\nWhat is your current weight in kilograms? (kg)\n> "; // prompt requesting for weight in kilograms
            cin >> weight; // requests user input for variable weight for weight in kilograms

            cout <<"\nACTIVITY              CALS BURNED               FOR: " << duration << " MINUTES\n";
            cout <<"Walking slowly        " << fixed << setprecision(2) << duration*(2*3.5*weight)/200 << "cal\n"; // calculation for the calories burnt for x minutes walking slowly
            cout <<"Walking quickly       " << fixed << setprecision(2) << duration*(3*3.5*weight)/200 << "cal\n"; // calculation for the calories burnt per for x minutes walking quickly
            cout <<"Jogging               " << fixed << setprecision(2) << duration*(8.8*3.5*weight)/200 << "cal\n"; // calculation for the calories burnt per for x minutes jogging
            break;

        case 2:    
            cout << "\nWhat is your exercise duration in minutes?:\n> "; // prompt requesting for exercise duration
            cin >> duration; // requests user input for variable duration and exercise durations
            cout << "What is your weight in kg?:\n> ";
            cin >> weight;
            cout << "\nWhich type of exercise do you wish to do?:\n[1] Walking slowly\n[2] Walking quickly\n[3] Jogging\n\n> "; // prompt requesting for weight in kilograms
            cin >> exercise; // requests user input for variable weight for weight in kilograms

            switch(exercise)
            {
                case 1:
                    cout << "You can burn " << fixed << setprecision(2) << duration*(2*3.5*weight)/200 << " calories from Walking Slowly!\n"; // calculation for the calories burnt for x minutes walking slowly
                    break;
                case 2:
                    cout << fixed << setprecision(2) << duration*(3*3.5*weight)/200 << "cal\n"; // calculation for the calories burnt for x minutes walking slowly
                    break;
                case 3:
                    cout << fixed << setprecision(2) << duration*(8.8*3.5*weight)/200 << "cal\n"; // calculation for the calories burnt for x minutes walking slowly
                    break;
                default:
                    cout << "Invalid choice input.";
            }
            break;
        default:
            cout << "Invalid choice input." << endl;
    }
    return 0;
}


/*
Would you like to...
[1] See calorie burning TABLE for weight and duration
[2] See calorie burn for SPECIFIC exercise

> 2

What is your exercise duration in minutes?:
> 50
What is your weight in kg?:
> 67

Which type of exercise do you wish to do?:
[1] Walking slowly
[2] Walking quickly
[3] Jogging

> 3
515.90cal
*/

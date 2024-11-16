#include <iostream>
#include <cmath>

using namespace std;

// Define pi as a constant
const float pi = 3.14159265359;

// Function to calculate the perpendicular
void calculate_perpen(float base, float angle)
{
    float perpen;
    perpen = base * tan(angle);  // Angle must be in radians
    cout << "The perpendicular of a triangle is: " << perpen << endl;
}

// Function to calculate the base
void calculate_base(float perpen, float angle)
{
    float base;
    base = perpen / tan(angle);  // Angle must be in radians
    cout << "The base of a triangle is: " << base << endl;
}

// Function to calculate the hypotenuse
void calculate_hypo(float perpen, float angle)
{
    float hypo;
    hypo = perpen / sin(angle);  // Angle must be in radians
    cout << "The hypotenuse of a triangle is: " << hypo << endl;
}

// Function to calculate the area
void calculate_area(float base, float perpen)
{
    float area;
    area = 0.5 * base * perpen;  // Correct the division
    cout << "The area of a triangle is: " << area << endl;
}

int main()
{
    float base, perpen, hypo, angle;
    char c, w;

    do {
        cout << "\t\t\tIN THIS PROGRAM, YOU CAN CALCULATE THE AREA OF A TRIANGLE \n\t\t\tUSING TRIGONOMETRIC FUNCTIONS AND ALSO FIND THE SIDES OF\n\t\t\tA TRIANGLE." << endl << endl;

        cout << "Please choose your option: perpendicular(p), base(b), hypotenuse(h), area(a): ";
        cin >> c;

        switch(c)
        {
            case 'p':
            case 'P':
                cout << "Enter the base of a triangle: ";
                cin >> base;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                angle = angle * pi / 180;  // Convert degrees to radians
                calculate_perpen(base, angle);
                break;

            case 'b':
            case 'B':
                cout << "Enter the perpendicular of a triangle: ";
                cin >> perpen;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                angle = angle * pi / 180;  // Convert degrees to radians
                calculate_base(perpen, angle);
                break;

            case 'h':
            case 'H':
                cout << "Enter the perpendicular of a triangle: ";
                cin >> perpen;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                angle = angle * pi / 180;  // Convert degrees to radians
                calculate_hypo(perpen, angle);
                break;

            case 'a':
            case 'A':
                cout << "Enter the base of a triangle: ";
                cin >> base;
                cout << "Enter the perpendicular of a triangle: ";
                cin >> perpen;
                calculate_area(base, perpen);
                break;

            default:
                cout << "Please enter a valid option." << endl;
                break;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> w;

        if (w == 'y' || w == 'Y') {
            cout << endl << endl << "-------------------------------------------------------------------------------------------------" << endl << endl;
        } else {
            cout <<endl<< "Thank you for using this program!" << endl;
        }

    } while (w == 'y' || w == 'Y');

    return 0;
}

// COMSC-210 | Lab 23 | Mira Anand
// Module 9, Lesson: std::list & std::set, Assignment: Goat Manager 3001
// IDE used: Visual Studio Code for Mac

#include <cstdlib> // needed to generate a random number
#include <ctime> // needed to generate a random number
#include <fstream> // needed for file operations
#include "Goat.h" // references the Goat header file, which contains a complete class for Goat objects
#include <iomanip>
#include <iostream>
#include <list> // needed to use std::list
#include <string>
using namespace std;

// declaration and initialization of const int variables
const int SZ_NAMES = 200; // represents array size for names, array can hold 200 names
const int SZ_COLORS = 25; // represents array size for colors, array can hold 25 colors
const int MAX_AGE = 20; // represents the maximum age to be assigned to a Goat object, will be used to generate a random #

// function prototypes
int main_menu();
int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);

int main() 
{
    srand(time(0)); // // needed as the first line in main() for randomization

    bool again = true; // set bool flag to true until user wants to quit program

    list<Goat> trip; // creation of an std::list 

    // code block to read & populate arrays for names
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();

    // code block to read & populate arrays for colors
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();

    // creation of a do-while loop so that the user can continue to select options until they wish to quit
    do
    {
        int userChoice = main_menu(); // main_menu() function call - displays GM3K1 menu, retrieves user's choice, assigns it to userChoice

        // creation of a switch statement that handles cases of each numbered option based on userChoice
        switch (userChoice)
        {
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;
            
            case 4:
                break;
            
            // user input validation for menu option # (has to be 1-4)
            // main_menu() function also handles user input validation, but it is good to include it here also for completeness
            default:
                cout << "Invalid choice." << endl;
        }

    } while (again); // as long as again is set to true

    return 0;
}

// int main_menu() function header
// DESCRIPTION: this function outputs a GM3K1 menu that loops until the user wishes to quit
// the function obtains the user's choice for the menu option # they would like to select, validates it, and returns this choice to main()
// ARGUMENTS: no arguments/parameters
// RETURNS: int userChoice, which is the user input for the menu option # they would like to select
int main_menu()
{
    int userChoice; // to hold user's choice for menu option #

    cout << "*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a goat" << endl;
    cout << "[2] Delete a goat" << endl;
    cout << "[3] List goats" << endl;
    cout << "[4] Quit" << endl;
    cout << "Choice --> ";
    cin >> userChoice;

    // input validation is performed, to ensure that the user does not input an invalid menu option #
    // if they input an invalid choice, they will be prompted again until they enter a valid choice
    while (userChoice < 1 || userChoice > 4)
    {
        cout << "ERROR: Choice must be between 1-4. Please enter a valid choice and try again: ";
        cin >> userChoice;
    }

    return userChoice; // return int userChoice to main()
}
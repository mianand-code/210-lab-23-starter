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

    return 0;
}

// int main_menu() function header
// DESCRIPTION:
// ARGUMENTS: no arguments/parameters
// RETURNS: nothing, void function
int main_menu()
{
    int userChoice; // to hold user's choice of menu option #
}
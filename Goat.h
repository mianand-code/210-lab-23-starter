// COMSC-210 | Lab 23 | Mira Anand
// Module 9, Lesson: std::list & std::set, Assignment: Goat Manager 3001
// IDE used: Visual Studio Code for Mac

// Goat.h
// Header file that contains a complete class for Goat objects

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

// creation of Goat Class
class Goat {
private: // private member variables
    string name; // to hold goat's name
    int age; // to hold goat's age
    string color; // to hold color of goat

// public member functions
public: 
    // creation of a default constructor, Goat()
    // DESCRIPTION: initializes age, name, and color to default values
    // - name and color to empty strings
    // - age to 0
    // ARGUMENTS: no arguments/parameters
    // RETURNS: no return type
    Goat()                          { name = ""; age = 0; color = ""; }

    // write three more constructors
    // creation of a partial constructor, Goat(string n)
    // DESCRIPTION: initializes name by parameter, age to 0, and color to an empty string
    // ARGUMENTS: string n, represents the goat's name
    // RETURNS: no return type
    Goat(string n)                  { name = n; age = 0; color = ""; }

    // creation of a partial constructor, Goat(string n, int a)
    // DESCRIPTION: initializes name and age by parameter, color to an empty string
    // ARGUMENTS: string n, represents the goat's name
    // RETURNS: no return type
    Goat(string n, int a)           { name = n; age = a; color = ""; }

    // creation of a full parameter constructor, Goat(string n, int a, string c)
    // DESCRIPTION: initializes name, age, and color all by parameter
    // ARGUMENTS: string n, represents the goat's name
    // - int a, represents the goat's age
    // - string c, represents the color of the goat
    // RETURNS: no return type
    Goat(string n, int a, string c) { name = n; age = a; color = c; }

    // setters and getters
    void set_name(string n)         { name = n; };
    string get_name() const         { return name; };
    void set_age(int a)             { age = a; };
    int get_age() const             { return age; }
    void set_color(string c)        { color = c; }
    string get_color() const        { return color; }

    // write overloaded < operator for the std::list
};

#endif
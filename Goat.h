// COMSC-210 | Lab 23 | Mira Anand
// Module 9, Lesson: std::list & std::set, Assignment: Goat Manager 3001
// IDE used: Visual Studio Code for Mac

// Goat.h
// Header file that contains a complete class for Goat objects

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

class Goat { // creation of Goat Class
private: // private member variables
    string name; // to hold goat's name
    int age; // to hold goat's age
    string color; // to hold color of goat

// public member functions
public: 
    Goat()                          { name = ""; age = 0; color = ""; }
    // write three more constructors


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
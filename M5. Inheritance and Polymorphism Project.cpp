//M5. Inheritance and Polymorphism Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer: Sean Greene
//Date: 16/04/2026
//Project: Polymorphism Program
//Requirements: 

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
    BasicShape* shapes[5];

    shapes[0] = new Rectangle(5, 3, "Rect1");
    shapes[1] = new Rectangle(2, 4, "Rect2");
    shapes[2] = new Circle(0, 0, 3, "Circle1");
    shapes[3] = new Circle(1, 1, 5, "Circle2");
    shapes[4] = new Square(4, "Square1");

    cout << "--Initial Areas--\n" << endl;
    for (int i = 0; i < 5; i++) {
        cout << shapes[i]->getName() << ": " << shapes[i]->getArea() << endl;
    }

    cout << "\n--After Changes--\n" << endl;
    ((Circle*)shapes[2])->setRadius(10);
    ((Rectangle*)shapes[0])->setLength(10);
    ((Square*)shapes[4])->setSide(6);

    for (int i = 0; i < 5; i++) {
        cout << shapes[i]->getName() << ": " << shapes[i]->getArea() << endl;
    }

    for (int i = 0; i < 5; i++) {
        delete shapes[i];
    }

    return 0;
}
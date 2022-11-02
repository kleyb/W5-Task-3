// W5 Task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Shape.h";
#include"Rectangle.h";
#include"Triangle.h";
using namespace std;
int main()
{
    int ShapesArea;
    Shape shape;
    Rectangle rectangle;
    Triangle triangle;
    
    ShapesArea = rectangle.area();
    cout << "The area of rectangle is: " << ShapesArea <<endl;
    
    ShapesArea = triangle.area();
    cout << "The area of triangle is: " << ShapesArea<<endl;
}

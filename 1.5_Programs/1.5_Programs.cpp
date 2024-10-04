// Write a program that provides the radius, circumference and area of a circle given the
// coordinates of its center point and a point on its circumference.
// The following formula gives the distance between two points(x1, y1) and (x2, y2) in the Cartesian
// plane :
// sqrt((𝑥2 ― 𝑥1)^2+ (𝑦2 ― 𝑦1)^2)
// Note that the calculation of the radius of a circle is a specialized version of the distance
// calculation.For this program write a function called calcDistance with the precondition that it
// takes as input the coordinates of two points on the cartesian plane and the postcondition that it
// returns the distance between these two points.
// The write a function called calcRadius with the precondition that it takes as input the
// coordinates for the center of a circle and the coordinates of a point on the circumference.The
// postcondition is that it returns the radius of the circle.
// Have the specialized calcRadius function call the more general calcDistance function
// which would return the result of the distance function as the radius of the circle.Notice that the
// output for the program does not ask for the distance, it only asks for the radius so the
// calcDistance function is “hidden” from the main function.
// Include a function calcCircumference which takes as input the radius of the circle and
// returns the circumference(If r is the radius, the circumference is 2πr).
// Also include a function calcArea which takes as input the radius of the circle and returns the
// area(if r is the radius, the area is πr^2).
// Assume that π = 3.1416.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calcDistance(int x1, int y1, int x2, int y2);
float calcRadius();
float calcCircumference(float radius,float pi);
float calcArea(float radius,float pi);
void print(float radius, float circumference, float area);


int main()
{
    float radius;
    float circumference;
    float area;
    float pi = 3.1416;

    radius = calcRadius();
    circumference = calcCircumference(radius,pi);
    area = calcArea(radius,pi);
    print(radius, circumference, area);
}

float calcDistance(int x1, int y1, int x2, int y2)
{
    int half1;
    int half2;
    float distance;
    
    half1 = pow(x2 - x1,2);
    half2 = pow(y2 - y1, 2);
    distance = sqrt(half1 + half2);
    return distance;
}

float calcRadius()
{
    float radius;
    int cx1;
    int cy1;
    int cx2;
    int cy2;

    cout << "what is the x coordinate of the center?" << endl;
    cin >> cx1; 
    cout << "what is the y coordinate of the center?" << endl;
    cin >> cy1;
    cout << "what is the x coordinate of the point on the circumference?" << endl;
    cin >> cx2; 
    cout << "what is the y coordinate of the point on the circumference?" << endl;
    cin >> cy2;

    radius = calcDistance(cx1, cy1, cx2, cy2);
    return radius;
}

float calcCircumference (float radius,float pi)
{
    float circumference;

    circumference = 2 * pi * radius;
    return circumference;
}

float calcArea(float radius,float pi)
{
    float area;

    area = pi * pow(radius, 2);
    return area;
}

void print(float radius, float circumference, float area)
{
    cout << setprecision(2) << fixed << "the radius of the circle is " << radius << "." << endl;
    cout << setprecision(2) << fixed << "the circumference of the circle is " << circumference << "." << endl;
    cout << setprecision(2) << fixed << "the area of the circle is " << area << "." << endl;
}
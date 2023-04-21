#include <iostream>
#include <cmath> // very important
using namespace std;
// create class here
class Areas
{
    // create the fucntion here
public:
    double coneArea(double r, double h)
    {
        // initialize variables
        double sa, l, pi;
        pi = 3.142;
        l = sqrt(pow(r, 2) + pow(h, 2));
        sa = (pi * pow(r, 2)) + (pi * r * l);
        // return sa as the computed area of the cone
        return sa;
    }
};
// main function here
int main()
{
    Areas myArea;
    // initialize variables
    double computedArea, height, radius;
    cout << "Enter the height of your cone :";
    cin >> height;
    cout << "Enter the radius of your cone :";
    cin >> radius;
    computedArea = myArea.coneArea(radius, height);
    // display the computed area
    cout << "The area of your cone is :" << computedArea << " square units" << endl;
    return 0;
}
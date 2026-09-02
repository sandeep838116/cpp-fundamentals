// If the sides form a valid triangle, determine whether it is equilateral, isosceles or scalene.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first side: ";
    cin >> a;
    cout << "Enter the second side: ";
    cin >> b;
    cout << "Enter the third side: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        if (a == b && b == c)
        {
            cout << "These sides will form equilateral triangle.";
        }
        else if (a != b && b != c && a != c)
        {
            cout << "These sides will form scalene triangle.";
        }
        else
        {
            cout << "These sides will form isosceles triangle.";
        }
    }
    else
    {
        cout << "Enter valid sides.";
    }
}
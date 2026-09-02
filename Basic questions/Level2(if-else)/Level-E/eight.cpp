// Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    int pro = 1;
    cout << "Enter the number: ";
    cin >> num;

    if (num >= 1 && num <= 9999)
    {
        while (num)
        {
            int digit = num % 10;
            sum += digit;
            pro *= digit;
            num /= 10;
        }
        if (sum > pro)
        {
            cout << "Sum of digit is greater than product.";
        }
        else
        {
            cout << "Sum of digit is not greater than product.";
        }
    }
    else
    {
        cout << "Enter number between 1-9999.";
    }
}
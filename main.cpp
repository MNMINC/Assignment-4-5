// Make a program that finds the minimum and maximum values among three integer values.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    //int min;
    cin >> num1 >> num2 >> num3;
    
    int min = num1, max = num1, med = num1 + num2 + num3;
    if (num2 > num1)
        max = num2;
    else
        min = num2;
    if (num3 > max)
        max = num3;
    else if (num3 < min)
        min = num3;
    med -= max + min;

    // Use the following statements to print output
    //cout << "The smallest number is  " << min << endl;
    //cout << "The greatest number is  " << max << endl;
    cout << "The order is: " << min << med << max << endl;
}
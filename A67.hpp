//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)


void swap(int &num1, int &num2)
{
    int a = num1;
    int b = num2;
    num1 = b;
    num2 = a; 
}

void swap(int &num1, int &num2, int &num3)
{
    int a, b, c; 
    int max, min, remainder;
    a = num1; 
    b = num2; 
    c = num3; 
    if (a > b)
    {
        if ((a > c) && (b > c));=
        {
            max = a;
            min = c; 
            remainder = b; 
        }
        else if ((a > c) && (b < c))
        {
            max = a; 
            min = b; 
            remainder = c; 
        }
        else if (a < c)
        {
            max = b; 
            min = a; 
            remainder = c;
        }
        
    }
    else if (b > c)
    {
        if ((a < b) && (c > a))
            max = b; 
            min = c; 
            remainder = a; 
        else if ((c < a) && (b > a))
        {
            max = b;
            min = a;
            remainder = c; 
        }
    }
    else if (c > a)
    {
        if ((c > b) && (a < b))
        {
            max = c; 
            min = a;
            remainder = b;
        }
        else if ((c > b) && (b < a))
            max = c; 
            min = b;
            remainder = a;
    }

} 

void swap(int &num1, int &num2, int &num3, int &num4)
{
    int a = num1; 
    int b = num2; 
    int c = num3; 
    int d = num4; 

    num4 = c; 
    num3 = b; 
    num2 = a; 
    num1 = d;
}
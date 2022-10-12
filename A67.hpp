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
    int max, min, remainder, nums[3];
    nums[0] = num1, nums[1] = num2, nums[2] = num3;

    for (int i = 1; i < 3; i++)
    {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }

    for (int i =0; i < 3; i++)
    {
        if (min != nums[i] && max != nums[i])
        {
            remainder = nums[i];
            break;
        }
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
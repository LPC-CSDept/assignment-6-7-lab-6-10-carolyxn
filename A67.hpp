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
    int max, min, remainder, nums[3];
    nums[0] = num1, nums[1] = num2, nums[2] = num3;

    for (int i = 1; i < 3; i++)
    {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
        else if (nums[i] == min) || (nums[i] == max)
            max = nums[i];
            min = max;
            remainder = max; 
    }

    for (int i = 0; i < 3; i++)
    {
        if (min != nums[i] && max != nums[i])
        {
            remainder = nums[i];
            break;
        }
        if (num1 == num3)
        {
            remainder = num1;
            break;
        }
        if (num2 == num3)
        {
            remainder = num2; 
            break;
        }
        if (num1 == num3)
        {
            remainder = num1; 
            break;
        }
    }
    num1 = min;
    num2 = remainder; 
    num3 = max; 
} 

void swap(int &num1, int &num2, int &num3, int &num4)
{
    int a = num1; 
    int b = num2; 
    int c = num3; 
    int d = num4; 

    num4 = a; 
    num3 = d; 
    num2 = c; 
    num1 = b;
}
#include <stdio.h>

int main()
{
    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2; // you can also change the divisor here

    int z = x + y;

    float d = x / (float)y; // because the divisor is a int the decimal place will be truncated. by converting it into a float we get back the decimal

    int m = x % y; // modulus gets the remainder of any two numbers. Is very helpful to find if a number is even or odd

    printf("%d\n%.1f\n%d", z, d, m);

    return 0;
}
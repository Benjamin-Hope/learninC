// This a program to calculate the circumference of a circle

#include <stdio.h>
#include <math.h>

float calculateCirc(float radius)
{
    const double PI = 3.14159;
    return 2 * PI * radius;
}

int main()
{
    float radius;
    double circumference;

    printf("\nEnter the Circumference of your circle\n");
    scanf("%f", &radius);

    circumference = calculateCirc(radius);
    if (circumference <= 0)
    {
        printf("\nInvalid radius\n");
        return 1;
    }
    else
    {
        printf("\nThe answer is %lf", circumference);
    }

    // This can be done better with a switch statement:
    switch ((int)circumference) // This is a typecast
    {
    case 0:
        printf("\nInvalid radius\n");
        break;

    default:
        break;
    }
}
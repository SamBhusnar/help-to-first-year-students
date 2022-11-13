#include <stdio.h>
#include <math.h>
#include <conio.h>
#define pi 3.142
int main()
{
    int inp;
    double cal, rad, myres, len;
    ;
    float res, radius, a, b, result;
    ;
    printf(" Enter any operation \n press 1 for area of circle \n press 2 for circumference of circle\npress 3 for area of triangle\n press 4 for area of square\n ");
    scanf("%d", &inp);
    switch (inp)
    {
    case 1:

        printf("Enter radius of circle\n ");
        scanf("%lf", &rad);
        cal = pi * pow(rad, 2.0);
        printf("Area of circle is : %.2lf", cal);
        break;

    case 2:

        printf("Enter radius of circle\n");
        scanf("%f", &radius);
        res = 2 * pi * radius;
        printf("circumference of circle is : %.2f", res);
        break;
    case 3:

        printf("Enter height and base of triangle\n");
        scanf("%f%f", &a, &b);
        result = 0.5 * a * b;
        printf("Area of triangle is : %.2f", result);
        break;
    case 4:

        printf("Enter length of square\n");
        scanf("%lf", &len);
        myres = pow(len, 2.0);
        printf("Area of square is : %.2lf ", myres);
        break;
    default:
        printf("Please ! enter valid input\n");
    }
    return 0;
}
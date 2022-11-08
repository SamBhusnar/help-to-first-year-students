#include <stdio.h>
int main()
{
    float res, height, base;
    printf("Enter base and height of triangle \n");
    scanf("%f%f", &height, &base);
    res = 0.5 * height * base;
    printf("Area of triangle is :%.2f", res);
    return 0;
}
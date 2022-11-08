#include <stdio.h>
int main()
{
    float height, res;
    printf("Enter length of square :");
    scanf("%f",&height);
    res = height * height;
    printf("Area of square is : %.2f", res);
    return 0;
}
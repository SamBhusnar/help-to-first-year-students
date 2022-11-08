#include <stdio.h>
int main()
{
    float Length, res, width;
    printf("Enter Length and width of reactangle\n");
    scanf("%f%f", &Length, &width);
    res = Length * width;
    printf("Area of reactangle is :%.2f", res);
    return 0;
}
#include <stdio.h>
#define tpi 2* 3.14159
int main()
{
    float radius, res;
    printf("Enter radius of circle\n");
    scanf("%f", &radius);
    res = radius * tpi;
    printf("circumference of circle is : %.2f", res);

    return 0;
}
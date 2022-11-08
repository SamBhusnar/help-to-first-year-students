#include <stdio.h>
#include <math.h>
int main()
{
    int num, res;
    printf("Enter any number\n");
    scanf("%d", &num);
    res = sqrt(num);
    printf("Square root of %d is : %d", num, res);
    return 0;
}
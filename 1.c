// Write a program to find addtion of three numbers.
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter  any three number\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a + b + c;
    printf("The addition of %d+%d+%d=%d", a, b, c, d);
    return 0;
}
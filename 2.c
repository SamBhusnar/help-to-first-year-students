#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter any two number\n");
    scanf("%d%d", &a, &b);
    // Addition
    c = a + b;
    printf("Addition of %d+%d=%d\n", a, b, c);
    d = a - b;
    printf("subtraction of %d+%d=%d\n", a, b, d);
    e = a * b;
    printf("multiplication of %d+%d=%d\n", a, b, e);
    f = a / b;
    printf("division of %d+%d=%d\n", a, b, f);

        return 0;
}
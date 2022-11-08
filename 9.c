#include <stdio.h>
int main()
{
    float per, marks[6], total = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d  subject marks outof 100\n", i + 1);
        scanf("%f", &marks[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        total += marks[i];
    }
    printf("Total marks is : %.2f", total);
    per = (total / 600) * 100;
    printf("\nPercentage is : %.2f %%", per);
    return 0;
}
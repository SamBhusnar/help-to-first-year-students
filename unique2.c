#include<stdio.h>
int main(){
    char inp;
    int res,a,b;
    printf("Enter your choise\n");
    printf("for Addition :  + \nfor subtraction : - \nfor multiplication : * \nfor division : / \n");
     scanf("%c", &inp);
    switch (inp)
    {
    case '+':
    printf("Enter any two integer\n");
    scanf("%d%d",&a,&b);
    res=a+b;
    printf("Result is : %d",res);

        
        break;

    case '-':
  printf("Enter any two integer\n");
    scanf("%d%d",&a,&b);
    res=a-b;
    printf("Result is : %d",res);

        
       
        break;
    case '*':
  printf("Enter any two integer\n");
    scanf("%d%d",&a,&b);
    res=a*b;
    printf("Result is : %d",res);

        
        
        break;
    case '/':

         printf("Enter any two integer\n");
    scanf("%d%d",&a,&b);
    res=a/b;
    printf("Result is : %d",res);

        
        break;
    default:
        printf("Please ! enter valid input\n");
    }
    return 0;
}
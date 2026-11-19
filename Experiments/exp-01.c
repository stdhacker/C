//Experiment 01
#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 2 Number To Calculate Arithmetic Sol.\n");
    printf("Enter First Num.: ");
    scanf("%d",&num1);
    printf("Enter Second Num.: ");
    scanf("%d",&num2);

    int a = num1+num2 , s = num1-num2 , m = num1*num2 ;
    printf("\nAddition is: %d \n",a);
    printf("Subtraction is: %d \n",s);
    printf("Multiplication is: %d\n",m);

    if (num2 != 0)
    {
        int d=num1/num2, r=num1%num2;
        printf("Division is: %d\n",d);
        printf("Reminder is: %d",r);
    }

    else
    {
        printf("-Division and Modulus are not possible");
    }
}
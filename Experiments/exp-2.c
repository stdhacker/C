// Experiment 01
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    printf("-Area Of triangle using HERON FORMULA-\n");
    printf("Enter First Side Value: ");
    scanf("%d",&a);
    printf("Enter Second Side Value: ");
    scanf("%d",&b);
    printf("Enter Third Side Value: ");
    scanf("%d",&c);

    float s = (a+b+c)/2.0;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The Area Of This Triangle is: %.2f",area);
}
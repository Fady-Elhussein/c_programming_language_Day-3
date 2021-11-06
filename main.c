#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x;
    printf("Please Enter a number :");
    scanf("%f",&x);
    if (0<=x&&x<=25)//&& meaning Logical AND. True only if all operands are true.
    {printf("Interval [0,25]");}
    else if (25<x&&x<=50)
    {printf("Interval (25,50]");}
    else if (50<x&&x<=75)
    {printf("Interval (50,75]");}
    else if  (75<x&&x<=100)
    {printf("Interval (75,100]");}
    else
    {printf("Out of Intervals");}

    return 0;
}

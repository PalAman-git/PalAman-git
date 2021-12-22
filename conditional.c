#include<stdio.h>
int main(   )
{
    int a,b;
    do
    {
        printf("enter the number:\n");
        scanf("%d",&b);
        printf("%d\n",a=0);
        a=a+1;
    } while (a<b);
    
    return 0;
}

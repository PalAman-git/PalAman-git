#include <stdio.h>

int main()
{
    int a,b,c;
    printf(" Type the 1st digit:");
    scanf("%d",&a);
    printf("Type the second digit:");
    scanf("%d",&b);
    printf("This is the sum: %d\n",c, c=a+b);
    printf("This is the multiplication: %d\n",c, c=a*b);
    printf("This is the division: %9.4f\n",c, c=a/b);
    printf("This is the substraction: %d\n",c, c=a-b);
   
    return 0;
}

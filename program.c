#include <stdio.h>
int main()
{
    int a;
    printf("Welcome to the wining ceremony\n");
     printf("1-Science and Maths\n");
    printf("2-Maths\n");
    printf("3-Science\n");
    printf("please enter the number written before subject you have passed:");
    scanf("%d", &a);
    if (a==1)
    {
        printf("Congratulations! you get the prize money of Rs.45");
    }
    else if (a==2)
    {
  printf("Congratulations! you get the prize money of Rs.15");
    }
    else if (a==3)
    {
 printf("Congratulations! you get the prize money of Rs.15");
    }

    return 0;
}

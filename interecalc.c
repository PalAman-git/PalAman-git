#include<stdio.h>
int main(){
    int prin,noy;
    float roi,si;
     printf("enter the principal amount:");
     scanf("%d",&prin);
     printf("enter the no. of years:");
     scanf("%d",&noy);
     printf("enter the rate of interest:");
     scanf("%f",&roi);
    si=prin*noy*roi/100;//formule ko hmesha wahan likho jb saari values le li hai user se warna ye 0 assume krke answer 0 de dega
     printf("The simple interest would be %f:",si);
     return 0;
}
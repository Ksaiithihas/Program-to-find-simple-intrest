
#include <stdio.h>

void main ()
{
    int Pri,Rate,Time,Si;
    printf("Please enter Principle amount :");
    scanf("%d",&Pri);
    printf("Please enter rate of intrest :");
    scanf("%d",&Rate);
    printf("Please enter Time :");
    scanf("%d",&Time);
    Si =(Pri*Rate*Time)/100;
    printf ("Simple intrest=%d",Si);    
}

#include"head45.h"
   
int main()
{
     int ivalue1=0;
     int ivalue2=0;
     ULONG lret=0;

    printf("enter base:");
    scanf("%d",&ivalue1);

    printf("enter power:");
    scanf("%d",&ivalue2);
  
    lret=power(ivalue1,ivalue2);
    printf("result is:%ld",lret);
    
    return 0;
 }
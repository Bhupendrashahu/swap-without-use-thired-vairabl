#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the no for swap \n ");
    scanf("%d%d",&a,&b);
    a=a+b;
     b=a-b;
     a=a-b;
     printf("The value after swap is %d%d",a,b);
    return 0;
}

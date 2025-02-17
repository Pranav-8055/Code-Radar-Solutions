#include <stdio.h>
int main()
{
    int a;
    scanf("%f",&a);
    int msb=findMSB(a)
    if(msb==1)
    {
        printf(" Not Set");
    }
    else if(msb==0)
    {
        printf("Set");
    }

    return 0;
}
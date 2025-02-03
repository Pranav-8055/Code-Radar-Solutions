#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a%2.0==1.0)
    {
        printf("Set");
    }
    else if(a%2.0==0.0)
    {
        printf("Not Set");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%f",&a);
    if(a&(1<<31))
    
    {
        printf("Set");
    }
    else
    {
        printf("Not Set")
    }

    return 0;
}
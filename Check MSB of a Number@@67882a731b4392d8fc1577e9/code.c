#include <stdio.h>
int main()
{
    int a;
    scanf("%f",&a);
    if(a%2==1)
    {
        printf(" Not Set");
    }
    else if(a%2==0)
    {
        printf("Set");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==1)
    {
        printf("Set");
    }
    else if(a%2==0)
    {
        printf("Not Set");
    }

    return 0;
}
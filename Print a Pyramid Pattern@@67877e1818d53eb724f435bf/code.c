#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a==1)
    {
        printf("%c",'*');
    }
    else if(a==2)
    {
        printf("%c\n\n%c%c%c",'*');
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("Vowel");
    }
    else if(a!='a'||a!='e'||a!='i'||a!='o'||a!='u')
    {
        printf("Consonant");
    }
    else if(isdigit(a))
    {
        printf("Digit");
    }
}
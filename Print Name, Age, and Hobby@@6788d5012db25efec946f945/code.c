#include <stdio.h>
int main()
{
    char name[50];
    int age;
    char hobby[50];
    scanf("%s %d",&name, &age);
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}
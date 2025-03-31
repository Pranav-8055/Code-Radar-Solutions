#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int issorted=1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[j+1])
        {
            issorted=0;
            break;
        }
    }
    if(issorted==1)
    {
        printf("Sorted");

    }
    else
    {
        printf("Not Sorted");
    }
}
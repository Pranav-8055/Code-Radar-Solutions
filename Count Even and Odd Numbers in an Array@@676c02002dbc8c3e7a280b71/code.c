#include<stdio.h>
int iseven(int arr[],int n)
{
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count1++;
        }
            
        }
    return count1;
}
int isodd(int arr[],int n)
{
    int count2=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]%2!=0)
        {
            count2++;
        }
            
        }
    return count2;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d %d",iseven(arr,n),isodd(arr,n));
}

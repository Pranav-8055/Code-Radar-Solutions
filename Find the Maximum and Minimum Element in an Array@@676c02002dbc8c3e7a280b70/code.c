#include<stdio.h>
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    [
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    ]
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
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d %d",arr[0],arr[n-1]);
    }
}


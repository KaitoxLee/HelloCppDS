#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int *p,int n);
int main()
{
    int arr[]={12,34,11,0,23,1,98,77,-1};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("before sort is:");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    bubble_sort(arr,len);

    printf("after sort is:");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    system("pause");
    return 0;
}

void bubble_sort(int *p,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
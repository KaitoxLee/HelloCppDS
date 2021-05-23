#include<stdio.h>
#include<stdlib.h>
void insert_sort(int *p,int n);
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

    insert_sort(arr,len);

    printf("after sort is:");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    system("pause");
    return 0;
}

void insert_sort(int *p,int n)
{
    for(int i=1;i<n;i++)
    {
        if(p[i]<p[i-1])
        {
            int temp=p[i];
            int j=i-1;
            for(;j>=0&&p[j]>temp;j--)
            {
                p[j+1]=p[j];
            }
            p[j+1]=temp;
        }
    }
}
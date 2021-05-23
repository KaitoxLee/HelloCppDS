#include<stdio.h>
#include<stdlib.h>
void select_sort(int *p,int n);
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

    select_sort(arr,len);

    printf("after sort is:");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    system("pause");
    return 0;
}

void select_sort(int *p,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(p[min]>p[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=p[min];
            p[min]=p[i];
            p[i]=temp;
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
void shell_sort(int p[],int n);
int main()
{
    int arr[]={2,4,6,8,0,1,3,5,7,9,-1};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("The before sort is:");
    for(int k=0;k<len;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");

    shell_sort(arr,len);

     printf("The after sort is:");
    for(int k=0;k<len;k++)
    {
        printf("%d ",arr[k]);
    }

    system("pause");
    return 0;
}

void shell_sort(int p[],int n)
{
    for(int dk=n/2;dk>=1;dk=dk/2)
    {
        for(int i=dk;i<n;i++)
        {
            if(p[i-dk]>p[i])
            {
                int temp=p[i];
                int j=i-dk;
                for(;j>=0&&p[j]>temp;j=j-dk)
                {
                    p[j+dk]=p[j];
                }
                p[j+dk]=temp;
            }
        }
    }
}
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
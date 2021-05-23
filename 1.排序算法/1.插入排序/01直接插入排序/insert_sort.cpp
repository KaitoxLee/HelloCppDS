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

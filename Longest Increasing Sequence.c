#include<stdio.h>

int main()
{
    int lis[100],i,j,max=0,a[100],n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
        lis[i]=1;

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j]&&lis[i]<(lis[j]+1))
            {
                lis[i]++;
            }
        }
    }

    //max=max(lis);
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
            max=lis[i];
    }

    printf("\n\n%d",max);

    return 0;
}

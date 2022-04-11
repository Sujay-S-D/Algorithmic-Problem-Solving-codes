#include<stdio.h>

int main()
{
    int max=0,tmax=0,n;

    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        tmax=tmax+a[i];

        if(tmax<0)
            tmax=0;
        if(max<tmax)
            max=tmax;
    }

    printf("%d\n",max);

    return 0;
}

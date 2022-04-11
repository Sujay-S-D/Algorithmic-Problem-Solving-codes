#include<stdio.h>

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    int n,k;

    scanf("%d",&n);

    int c[n];

    k=n-1;

    for(int i=0;i<=n;i++)
    {
        for(int j=min(i,k);j>0;j--)
        {
            c[j]=c[j]+c[j-1];
        }
    }

    printf("%d",c[k+1]);
}

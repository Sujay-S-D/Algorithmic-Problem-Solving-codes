#include<stdio.h>

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int n;

    scanf("%d",&n);

    int result[n],i,j,values[n];

     for(i=0;i<=n;i++)
        {
            result[i]=0;
            scanf("%d",&values[i]);
        }

   /* printf("Result array before DP\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",result[i]);
    }*/
    result[n+1]=0;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            result[i]=max(result[i],max(result[i],values[j]*result[i-(j+1)]));
        }
    }

    printf("\n\nResult array after DP\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",result[i]);
    }



}

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

    int result[n],i,j;

     for(i=0;i<n;i++)
        result[i]=0;

   /* printf("Result array before DP\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",result[i]);
    }*/

    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i/2;j++)
        {
            result[i]=max(result[i],max(j*result[i-j],j*(i-j)));
        }
    }

    printf("\n\nResult array after DP\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",result[i]);
    }



}

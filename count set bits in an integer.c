#include<stdio.h>

int main()
{
    int N,count=0;

    scanf("%d",&N);

    while(N!=0)
    {
        count += N & 1;
        N >>= 1;
    }
    printf("\n\n%d",count);

    return 0;
}

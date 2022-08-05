#include<stdio.h>
int mian()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {

        long long n,k;
        scanf("%lld %lld",&n,&k);

        if(n<k*k)
        {
            printf("NO\n");
        }
        else
        {
            if((n%2==1 && k%2 == 0) || (n%2==0 && k%2 ==1)) printf("NO\n");
            else
            {
                printf("YES\n");

            }
        }
    }


    return 0;
}

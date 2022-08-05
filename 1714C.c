#include<stdio.h>
int main(){

int x;
scanf("%d",&x);
long long n[11];
int s=9; int i=0;
while(x)
{
    if(x>=s)
    {
        x=x-s;
        n[i++]=s;
        s--;
    }
    for(int j=i-1; j>=0; j--){
        printf("%lld\n",n[j]);
    }

}


return 0;
}

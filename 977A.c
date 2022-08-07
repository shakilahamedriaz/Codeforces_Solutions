#include<stdio.h>
int main(){

long long int n,k;
scanf("%lld %lld",&n,&k);

while(k--)
{

  if(n%10 == 0){

    n/=10;
  }else{
     n--;
  }

}

printf("%lld\n",n);
return 0;
}

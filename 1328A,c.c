#include<stdio.h>
int main(){


int t,a,b,n;
scanf("%d",&t);
for(int i=0; i<t; i++){

    scanf("%d%d",&a,&b);
    if(a%b==0){
        printf("0\n");
    }else{
        n=a%b;
        n=a-n;

        printf("%d\n",n);

    }
}


return 0;
}

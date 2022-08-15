#include<stdio.h>
int main(){

int n,i,t;
scanf("%d",&t);

for(int i=0; i<t; i++){

    scanf("%d",&n);
    if(n==1 || n==2){

        printf("0\n");
    }
    else{
        printf("%d\n",(n-1)/2);
    }

}


return 0;
}





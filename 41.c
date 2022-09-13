
#include<stdio.h>
#include<string.h>
int main(){

char a[50],b[50];
gets(a);
gets(b);




if(a!=strrev(b))

 printf("YES\n");

else
    printf("NO\n");

return 0;
}

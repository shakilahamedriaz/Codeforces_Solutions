#include<stdio.h>
#include<string.h>
int main(){

char s1[101],s2[101];

gets(s1);
gets(s2);

int l=strlen(s1);

int a,b;
int count=0;

for(int i=0; i<l; i++){

        a=(int)s1[i];
        b=(int)s2[i];

        if(a>90){

            a=a-32;
        }
        if(b>90){

            b=b-32;
        }
        if(a==b){
             count++;
             continue;

        }
        if(a<b){

            printf("-1\n");
            break;
        }
        if(a>b){
            printf("1\n");
            break;
        }
}

if(count==1){

    printf("0\n");
}

return 0;
}

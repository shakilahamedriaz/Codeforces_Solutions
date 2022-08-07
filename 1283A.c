#include<stdio.h>
int main(){

int t;
int h,m,x,y,ans;
scanf("%d",&t);

for(int i=1; i<=t; i++){
    scanf("%d %d",&h,&m);

    x=h*60;
    y=x+m;
    ans=1440-y;
    printf("%d\n",ans);

}


return 0;
}

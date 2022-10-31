#include<bits/stdc++.h>
using namespace std;

int main(){

int n,d,height[1000];
cin>>n>>d;

for(int i=0; i<n; i++)
{
    cin>>height[i];
}

sort(height,height+n);

int i1=0,i2=1,ways=0;

while(i2<n)
{
    if(height[i2]- height[i1]<=d)
    {
        ways+=(i2-i1);
        ++i2;
    }else{

       ++i1;

    }
}

ways *=2;


cout<< ways<<endl;




return 0;
}

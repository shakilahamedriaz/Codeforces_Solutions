#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

int x1,x2,y1,y2,maximum;

cin>>x1>>y1;
cin>>x2>>y2;

 int m=abs(x1-x2);
 int n=abs(y1-y2);

 maximum= max(m,n);

 cout<<maximum;




return 0;
}

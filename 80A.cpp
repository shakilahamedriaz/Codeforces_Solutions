#include <iostream>
using namespace std;
//code belong to Niraj Sazzie
int main() {
	int n,m;
	cin>>n>>m;
	int f=0;
	int c=0;
	   for(int p=n+1;p<=m;p++){
	       c=0;
	       for(int i=2;i<=(p/2)+1;i++){
	           if(p%i==0){
	               c++;
	           }
	     }
	     if(c==0){
	         if(p==m){
	         cout<<"YES"<<endl;
	         f=1;
	         break;
	         }
	        else{
	        cout<<"NO"<<endl;
	         f=1;
	         break;
	         }
	     }
	}
	if(!f){
	    cout<<"NO"<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){

int n,count=0;
cin>>n;

if(n<4){

    cout<< "1"<<endl;
    cout<<n<<endl;
}
else if(n%2==0){
    count=n/2;
    cout<<count<<endl;

    for(int i=0; i<count; i++){

        cout<<"2 ";
    }

}

else{

    n=n-3;
    count= n/2;

    cout<<count+1<<endl;

    for(int i=0; i<count; i++){

        cout<< "2 ";
    }

    cout<<"3 ";

}

return 0;
}

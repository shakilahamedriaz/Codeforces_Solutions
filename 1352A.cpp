#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

    int n;
    cin>>n;


    vector<int>a;

    int p=1;

    while(n>0){

        if(n%10>0){


            a.push_back((n%10)*p);

        }
        n/=10;
        p*=10;
    }
         cout << a.size() << endl;
		for (auto number :a) cout << number << " ";
		cout << endl;

}


return 0;
}

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

int n,r;
cin>>n>>r;

for(int i=0; i<n; i++){

    cin>>r;

     if (r >= 1900) {
      cout << "Division 1" << "\n";
    } else if (r >= 1600 && r < 1899) {
      cout << "Division 2" << "\n";
    } else if (r >= 1400 && r < 1599) {
      cout << "Division 3" << "\n";
    } else if(r<=1399 && r==-r){

      cout << "Division 4" << "\n";
    }
}

return 0;
}

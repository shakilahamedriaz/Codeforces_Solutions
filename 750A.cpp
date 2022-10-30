#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k,totalmin,total_problem,fu=0,cnt=0;

cin>>n>>k;

totalmin= 240-k;


for(int i=1; i<=n; i++){

      total_problem = 5*i;
      fu+=total_problem;

      if(fu<=totalmin){
        cnt++;
      }


}

cout<< cnt <<endl;

return 0;
}

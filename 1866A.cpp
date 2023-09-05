#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >>n;
    vector<int>positive,negative;
    positive.push_back(1e5);
    negative.push_back(-100000);

    for(int i=0; i<n; i++)
    {  
        int x;
        cin>>x;

        if(x<0)
        {
            negative.push_back(x);
        }
        else
        {
            positive.push_back(x);
        }
      
    }
    sort(positive.begin(), positive.end());
    a=positive[0];
    sort(negative.begin(), negative.end());
    b=negative.back();
    
    cout<<min(a,abs(b)) <<endl;
   

   return 0;
}
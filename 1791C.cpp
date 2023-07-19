#include<bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    int ans=n;

    int left=0,right=n-1;

    while(left<right && s[left]!=s[right])
    {
        left++;
        right--;
        ans-=2;
    }

    cout<< ans <<endl;
  
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ans();
    }
    return 0;
}
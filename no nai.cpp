#include<bits/stdc++.h>
using namespace std;

//Summation from 1 to N
int sum(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}

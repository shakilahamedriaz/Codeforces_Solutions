#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b, c;
    cin >>a >>b >>c;

    if(a+b==c)
    {
        cout<< c*2 <<endl;
    }
    else if(a+b<c)
    {
         cout<< (a*2)+(b*2) <<endl;
    }
    

    return 0;
}
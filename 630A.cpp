#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int n;
   // cin>>n;
    //int t=pow(5, n);
    //int last=t%10;
    //int blast=(t/10)%10;
    //cout<<blast<<last<<endl;

    /***
    We need to determine (5^n % 100) in this problem. But for any n>=2 the value is always 25. ;)
    Example,
    n = 2, 5^2 % 100 = 25 % 100 = 25
    n = 3, 5^3 % 100 = 125 % 100 = 25
    n = 4, 5^4 % 100 = 625 % 100 = 25
    n = 5, 5^5 % 100 = 3125 % 100 = 25
    and so on.
    ***/
    cout << 25 << endl;

    return 0;
}

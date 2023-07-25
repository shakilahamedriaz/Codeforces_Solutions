#include<bits/stdc++.h>
using namespace std;

int n, k, person, valid;

int main()
{
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> person;

        if(person +k <=5)
        {
            valid++;
        }
    }
    cout<<valid/3 <<endl;

    return 0;
}
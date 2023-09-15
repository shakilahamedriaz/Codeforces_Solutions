#include<bits/stdc++.h>
using namespace std;

int main()
{
    string numone, numtwo;
    cin >>numone >> numtwo;

    for(int i=0; i<numone.size(); i++)
    {
        if(numone[i]!=numtwo[i])
        {
            cout<< "1";
        }
        else{
            cout<< "0";
        }
    }

    return 0;
}
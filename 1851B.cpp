#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int arr[n+1];
    int cntone=0,cnttwo=0,cntthree=0,cntfour=0;
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
        if(arr[i]==1)
        {
            cntone++;
        }
        else if(arr[i]==2)
        {
            cnttwo++;
        }
        else if(arr[i]==3)
        {
            cntthree++;
        }
        else
        {
            cntfour++;
        }
    }
    int mint=cntfour;
    while(cntone!=0 && cntthree!=0)
    {
        cntthree=cntthree-1;
        cntone=cntone-1;
        mint+=1;
    }
    if(cntone==0 && cntthree!=0)
    {
        mint=mint+cntthree;
        cntthree=0;
    }
    mint=mint+cnttwo/2;
    if(cnttwo%2==1)
    {
        if(cntone<=2)
        {
            mint=mint+1;
            cnttwo=0;
            cntone=0;
        }
        else{
            cntone=cntone-2;
            mint=mint+1;
            cnttwo=0;
        }
    }

    if(cntone!=0)
    {
        mint=mint+cntone/4;
        if(cntone%4!=0)
        {
            mint=mint+1;
        }
    }
   

    cout<<mint<<endl;
   
    return 0;
}
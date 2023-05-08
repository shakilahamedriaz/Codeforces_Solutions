#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int maxlen=0, len=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]==0){

                len++;
            }
            else{
                maxlen=max(maxlen,len);
                len=0;
            }
        }

        maxlen=max(maxlen,len);

        cout<<maxlen<<endl;
    }
}

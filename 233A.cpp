#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    if(n%2==1) cout<< "-1"<<endl;
    else
    {

        vector<int>p(n);
        for(int i=0; i<n; i++)
        {
            if(i % 2==0)
            {
                p[i]=i+2;
            }
            else
            {
                p[i]=i;
            }
        }

        for(auto it : p)
        {
            cout<<it<< " ";
        }
    }


    return 0;
}

/*
The code reads the input value of n, which is 4.

Since 4 is even, the condition if(n%2==1) is not satisfied, so the code proceeds to the else block.

It creates a vector p of size n (which is 4 in this case).

The loop runs for i from 0 to 3 (inclusive):

a. When i is 0 (even index), p[i] is set to i + 2, which is 2.

b. When i is 1 (odd index), p[i] is set to i, which is 1.

c. When i is 2 (even index), p[i] is set to i + 2, which is 4.

d. When i is 3 (odd index), p[i] is set to i, which is 3.

The loop is finished, and the vector p now holds {2, 1, 4, 3}.

The code enters the loop for(auto it : p) and prints each element of the vector followed by a space. The output will be: 2 1 4 3.

*/

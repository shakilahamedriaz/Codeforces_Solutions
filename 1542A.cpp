#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{

  long t; cin>>t;

  while(t--)
  {
      long n;
      cin>>n;

      long cnt=0;

      for(int i=0; i<2*n; i++)
      {
          int x;
          cin>>x;

          cnt+=(x%2);
      }

      puts(cnt == n ? "Yes": " No");
  }



    return 0;
}

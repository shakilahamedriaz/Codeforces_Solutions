#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >>testcase;
	while(testcase--)
	{
	    int n,x,y;
	    cin >>n >>x >>y;

	    int temp=x*y;
	    if(n<=temp) cout<< "YES" <<endl;
	    else cout<< "NO" <<endl;


	}
	return 0;
}

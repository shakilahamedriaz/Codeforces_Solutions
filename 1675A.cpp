#include <bits/stdc++.h>
using namespace std;

void canBuyFood(int a, int b, int c, int x, int y) {

    if(a>=x && b>=y)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        int cat=a-x;
        int dog=b-x;
        if(c>=cat+dog)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        canBuyFood(a,b,c,x,y);
    }

    return 0;
}

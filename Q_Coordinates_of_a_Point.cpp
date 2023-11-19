#include<bits/stdc++.h>
using namespace std;

void sr_sol(float x, float y)
{
    if(x == 0.0 && y == 0.0) cout << "Origem" << endl; 
    else if((x > 0.0 && y == 0.0) || (x < 0.0 && y == 0.0)) cout << "Eixo X" << endl;
    else if((x == 0.0 && y > 0.0) || (x == 0 && y < 0.0)) cout << "Eixo Y" << endl;
    else if(x > 0.0 && y > 0.0) cout << "Q1" << endl;
    else if(x < 0.0 && y > 0.0) cout << "Q2" << endl;
    else if(x < 0.0 && y < 0.0) cout << "Q3" << endl;
    else cout << "Q4" << endl; // x > 0.0 && y < 0.0
}

int main()
{
    float x, y;
    cin >> x >> y;

    sr_sol(x, y);

    return 0;
}

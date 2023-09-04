#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    char current = 'a';  

    for (int i = 0; i < s.size(); i++)
    {
        int dis1 = abs(s[i] - current);  // clockwise
        int dis2 = abs(26 - dis1);  //counterclockwise

        int min_dis = min(dis1, dis2);
        cnt += min_dis;  // Add the minimum distance to the count

        current = s[i];  // Set the current letter to the next character
    }

    cout << cnt << endl;

    return 0;
}

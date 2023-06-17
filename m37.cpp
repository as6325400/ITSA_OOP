#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if(y == 0) cout << "x-axis\n";
    else if(x == 0) cout << "y-axis\n";
    else if(x > 0 && y > 0) cout << "1st Quadrant\n";
    else if(x < 0 && y > 0) cout << "2nd Quadrant\n";
    else if(x < 0 && y < 0) cout << "3rd Quadrant\n";
    else cout << "4th Quadrant\n";
}
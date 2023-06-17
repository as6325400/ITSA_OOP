#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    while(cin >> x >> y){
        if(x * x + y * y <= 10000){
            cout << "inside\n";
        }
        else{
            cout << "outside\n";
        }
    }
}
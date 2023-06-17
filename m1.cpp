#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double n, m, h;
    while(cin >> n >> m >> h){
      cout << "Trapezoid area:" << fixed << setprecision(1) << (n + m) * h / 2.0 << '\n'; 
    }
}
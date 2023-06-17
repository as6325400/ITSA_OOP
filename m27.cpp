#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    while(cin >> n >> m){
      if(n > m) swap(n, m);
      cout << (m + n) * (m - n + 1) / 2 << '\n';
    }
}
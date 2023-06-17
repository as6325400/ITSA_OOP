#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
      int ans = 0;
      for(int i = 1; i <= n; i++){
        if(i % 3 == 0) ans += i;
      }
      cout << ans << '\n';
    }
}
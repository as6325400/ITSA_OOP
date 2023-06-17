#include <bits/stdc++.h>

using namespace std;

int num(int n)
{
  if(n % 2 == 0 and n % 3 == 0 and n % 12 != 0) return n;
  else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
      int ans = 0;
      for(int i = 1; i <= n; i++){
        ans += num(i);
      }
      cout << ans << '\n';
    }
}
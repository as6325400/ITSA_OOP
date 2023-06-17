#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long num;
    while(cin >> num){
      long long ans = 1;
      for(int i = 1; i <= num; i++){
        ans *= i;
      }
      cout << ans << '\n';
    }
}
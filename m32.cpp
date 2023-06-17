#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    while(cin >> num){
      int temp = num;
      int ans = 0;
      while(temp > 0){
        ans += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
      }
      if(ans == num) cout << "Yes\n";
      else cout << "No\n";
    }
}
#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
      cout << 1;
      for(int i = 2; i <= n; i++){
        if(n % i == 0) cout << " " << i;
      }
      cout << '\n';
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
      for(int i = 1; i <= n; i++){
        cout << i << "*" << i << "=" << i * i << '\n';
      }
    }
}
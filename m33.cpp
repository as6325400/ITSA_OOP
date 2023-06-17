#include <bits/stdc++.h>

using namespace std;

bool butiful(int n){
  int sum = 0;
  for(int i = 1; i < n; i++){
    if(n % i == 0){
      sum += i;
    }
  }
  return sum == n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin >> n){
      int flag = 0;
      for(int i = 1; i <= n; i++){
        if(butiful(i)){
          if(flag == 0){
            cout << i;
            flag = 1;
          }
          else cout << ' ' << i;
        }
      }
      cout << '\n';
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    while(cin >> num){
      for(int i = 1; i <= num; i++){
        if(i % 35 == 0){
          if(i == 35) cout << i;
          else cout << ' ' << i;
        }
      }
      cout << '\n';
    }
}
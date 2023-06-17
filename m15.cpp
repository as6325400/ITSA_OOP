#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y;
  while(cin >> x >> y){
    if(x >= 0 and y >= 0 and x <= 100 and y <= 100){
      cout << "inside\n";
    }
    else{
      cout << "outside\n";
    }
  }
}
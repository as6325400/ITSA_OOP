#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    while(cin >> t){
      double sum;
      if(t <= 800){
        sum = t * 0.9;
      }
      else if(t > 800 and t < 1500){
        sum = t * 0.9 * 0.9;
      }
      else{
        sum = t * 0.9 * 0.79;
      }
      cout << fixed << setprecision(1) << sum << '\n';
    }
}
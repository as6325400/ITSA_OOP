#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while(cin >> n){
    int day = 60 * 60 * 24;
    int hour = 60 * 60;
    int min = 60;
    cout << n / day << " days\n";
    n %= day;
    cout << n / hour << " hours\n";
    n %= hour;
    cout << n / min << " minutes\n";
    n %= min;
    cout << n << " seconds\n";
  }
  
  
}
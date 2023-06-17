#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int arr[32];
  arr[0] = 1;
  for(int i = 1; i < 32; i++){
    arr[i] = arr[i - 1] * 2;
  }
  int n;
  while(cin >> n){
    if( n > 31 ) cout << "Value of more than 31" << '\n';
    else cout << arr[n] << '\n';
  }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int arr;
  while(cin >> arr){
    int ten = arr / 10;
    int five = (arr - ten * 10) / 5;
    int one = arr - ten * 10 - five * 5;
    cout << "NT10=" << ten << '\n';
    cout << "NT5=" << five << '\n';
    cout << "NT1=" << one << '\n';
  }
}
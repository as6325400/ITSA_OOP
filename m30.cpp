#include <bits/stdc++.h>

using namespace std;

bool isprime(int num){
  if(num == 1) return false;
  for(int i = 2; i <= sqrt(num); i++){
    if(num % i == 0) return false;
  }
  return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    while(cin >> num){
      if(isprime(num)) cout << "YES\n";
      else cout << "NO\n";
    }
}
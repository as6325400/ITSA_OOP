#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int year;
    while(cin >> year){
      if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout << "Bissextile Year\n";
      }else{
        cout << "Common Year\n";
      }
    }
}
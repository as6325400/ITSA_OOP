#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int month;
    while(cin >> month){
      if(month == 1 || month == 2 || month == 12){
        cout << "Winter\n";
      }else if(month == 3 || month == 4 || month == 5){
        cout << "Spring\n";
      }else if(month == 6 || month == 7 || month == 8){
        cout << "Summer\n";
      }else if(month == 9 || month == 10 || month == 11){
        cout << "Autumn\n";
      }
    }
}
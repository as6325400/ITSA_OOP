#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    while(cin >> num){
      bitset<8> binary(num);
      cout << binary << '\n';
    }
}
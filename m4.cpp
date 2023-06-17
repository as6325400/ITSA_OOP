#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int mod = n % m;
    cout << n << '+' << m << '=' << n + m << '\n';
    cout << n << '*' << m << '=' << n * m << '\n';
    cout << n << '-' << m << '=' << n - m << '\n';
    if(mod >= 0){
      cout << n << '/' << m << '=' << n / m << "..." << mod << '\n';
    }
    else{
      cout << n << '/' << m << '=' << n / m - 1 << "..." << mod + m << '\n';
    }
}
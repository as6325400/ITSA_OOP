#include <bits/stdc++.h>
#include <cmath>

using namespace std;

double roundToFirstDecimal(double number) {
    double shifted = number * 10.0;
    double rounded = round(shifted);
    return rounded / 10.0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double n;
    while(cin >> n){
      cout << fixed << setprecision(1) << roundToFirstDecimal(n * n) << '\n';
    }
}
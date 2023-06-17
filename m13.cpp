#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int hs, he, ms, me;
    cin >> hs >> ms >> he >> me;
    int t = (he - hs) * 60 + (me - ms);
    if(t <= 120 and t >= 30)
        cout << (t / 30) * 30 << '\n';
    else if(t>120 and t<=240)
        cout << ((t - 120) / 30) * 40 + 120 << '\n';
    else if(t>240)
        cout << ((t - 240) / 30) * 60 + 280 << '\n';
}
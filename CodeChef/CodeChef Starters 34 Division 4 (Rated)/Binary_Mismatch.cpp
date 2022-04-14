#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void fun(int g, int l, string &s, char lesserChar)
{
    // cout << g << " " << l << " " << lesserChar << endl;
    ll n = s.length();
    ll window = (n / 2) - l;
    for (ll i = 0; i <= n - window; i++)
    {
        string sub = s.substr(i, window);
        // cout << sub << endl;
        bool found = false;
        for (char ch : sub)
        {
            if (ch == lesserChar)
            {
                // cout << ch << " here" << endl;
                found = true;
                break;
            }
        }
        if (found)
            continue;
        else
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + window << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2)
    {
        cout << "NO" << endl;
        return;
    }
    ll o = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            o++;
        else
            z++;
    }

    if (o > z)
    {
        fun(o, z, s, '0');
    }
    else if (z > o)
    {
        fun(z, o, s, '1');
    }
    else
    {
        cout << "YES" << endl;
        cout << 1 << " " << s.length() << endl;
    }
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}
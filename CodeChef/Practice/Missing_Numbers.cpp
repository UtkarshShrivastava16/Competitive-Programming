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

bool isValid(ll p, ll q, ll r, ll s)
{
    ll a = (p + q) / 2;
    ll b = (p - q) / 2;

    if (a < 1 || a > 10000)
        return false;
    if (b < 1 || b > 10000)
        return false;

    if (a * b != r)
        return false;
    if (a / b != s)
        return false;

    return true;
}
void solve()
{
    v64 v(4);
    forn(i, 4)
            cin >>
        v[i];
    int count = 0;
    sort(v.begin(), v.end());
    do
    {
        if (isValid(v[0], v[1], v[2], v[3]))
        {
            cout << (v[0] + v[1]) / 2 << " " << (v[0] - v[1]) / 2 << endl;
            return;
        }
        // cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << "\n";
    } while (next_permutation(v.begin(), v.end()));
    cout << -1 << " " << -1 << endl;
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
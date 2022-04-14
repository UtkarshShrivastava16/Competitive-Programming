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

int count(string s)
{
    int i = 0;
    int count = 0;
    while (i + 1 < s.length())
    {
        if (s[i] == '0' && s[i + 1] == '1')
        {
            count++;
            i++;
        }
        i++;
    }
    // cout << count << endl;
    return count;
}

string merge(string &odd, string &even)
{
    string res = "";
    for (int i = 0; i < (even.length()); i++)
    {
        res += even[i];
        if (i < odd.length())
            res += odd[i];
    }
    return res;
}

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    string odd = "", even = "";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even += s[i];
        else
            odd += s[i];
    }

    // inc even inc odd
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    string m1 = merge(odd, even);
    // inc even dec odd
    reverse(odd.begin(), odd.end());
    string m2 = merge(odd, even);
    // dec even dec odd
    reverse(even.begin(), even.end());
    string m3 = merge(odd, even);
    // dec even inc odd
    reverse(odd.begin(), odd.end());
    string m4 = merge(odd, even);

    // cout << m1 << endl;
    // cout << m2 << endl;
    // cout << m3 << endl;
    // cout << m4 << endl;
    cout << max({count(m1), count(m2), count(m3), count(m4)}) << endl;
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
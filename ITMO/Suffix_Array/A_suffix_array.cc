#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define rep(i,a,b) for (int i = (a); i < (b); ++i)
#define rrep(i,a,b) for (int i = (a); i > (b); --i)
#define each(x,a) for (auto &x : a)
#define endl '\n'

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;


int main() {
    string s;
    cin >> s;
    s += "$";
    int n = s.size();
    vector<string> ans;
    for(int i = 0; i < n-1; i++) {
        ans.pb(substr(i,n-i));
    }


    return 0;
}

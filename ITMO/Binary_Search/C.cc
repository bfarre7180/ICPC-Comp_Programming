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

int Solution(int arr[], int n, int query) {
    if(query >= arr[n-1]) {
        return n+1;
    }
    int l = 0;
    int r = n-1;
    while(l < r) {
        int m = (l+r)/2;
        if(query > arr[m]) {
            l = m+1;
        } else {
            r = m;
        }
    }
    return l+1;
}

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    int query;
    rep(i,0,n) {
        cin >> arr[i];
    }
    rep(i,0,k) {
        cin >> query;
        cout << Solution(arr,n,query) << "\n";
    }
    return 0;
}

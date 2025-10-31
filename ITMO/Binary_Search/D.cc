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

int bsUp(int arr[], int n, int query) {
    if(query >= arr[n-1]) {
        return n;
    }
    int l = 0;
    int r = n-1;
    while(l < r) {
        int m = (l+r)/2;
        if(query < arr[m]) {
            r = m;
        } else {
            l = m+1;
        }
    }
    return r;
}

int bsLow(int arr[], int n, int query) {
    if(query > arr[n-1]) {
        return n;
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
    return r;
}

int Solution(int arr[], int n, int low, int up) {
    return bsUp(arr,n,up) - bsLow(arr,n,low);
}

int main() {
    int n,k;
    cin >> n;
    int arr[n];
    rep(i,0,n) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cin >> k;
    rep(i,0,k) {
        int low, up;
        cin >> low >> up;
        cout << Solution(arr,n,low,up) << " ";
    }
    return 0;
}

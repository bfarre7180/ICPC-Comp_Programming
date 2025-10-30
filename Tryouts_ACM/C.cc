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

bool check(int nums[], int index, int n) { 
    int min_ = INT_MAX,max_ = INT_MIN;
    rep(i,0,index) {
        max_ = max(max_,nums[i]);
    }
    rep(i,index+1,n) {
        min_ = min(min_,nums[i]);
    }
    return min_ < nums[index] && nums[index] < max_;
}
int main() {
    int n;
    vector<int> m;
    cin >> n;
    int nums[n];
    rep(i,0,n) {
        cin >> nums[i];
    }
    rep(i,0,n) {
        if(check(nums,i,n)) {
            m.pb(nums[i]);
        }
    }
    int n1 = (int)m.size();
    cout << n1 << " ";
    for(int i = 0; i < n1 && i < 100; i++) {
        cout << m[i] << " ";
    }
    return 0;
}

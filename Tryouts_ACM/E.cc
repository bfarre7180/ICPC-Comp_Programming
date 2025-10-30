#include <bits/stdc++.h>
#include <string>
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

bool isPalindrome(string s) {
    return s.at(0) == s.at(4) && s.at(1) == s.at(3);
}

int main() {
    set<string> set;
    int t;
    cin >> t;
    rep(i,0,t) {
        string s;
        int x;
        int ans = 0;
        cin >> s >> x;
        int hour = stoi(s.substr(0,2));
        int minutes = stoi(s.substr(3,2));
        int hour_next = x / 60;
        int min_next = x % 60;
        while(set.count(s)) {    
            if(isPalindrome(s)) {
                ans++;
            }
            set.insert(s);
            hour = (hour + hour_next + (minutes + min_next) / 60) % 24;
            minutes = (minutes + min_next) % 60;
            string hour_ = (hour < 10)? "0" + to_string(hour): to_string(hour);
            string minutes_ = (minutes < 10)? "0" + to_string(minutes): to_string(minutes);
            s = hour_ + ":" + minutes_;
        }
        cout << ans << "\n";
        set.clear();
    }
    return 0;
}

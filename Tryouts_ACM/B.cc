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

void cascade(vector<string>&);

int main() {
    vector<string> hand;
    rep(i,0,52) {
        string card;
        cin >> card;
        hand.pb(card);
        cascade(hand);
    }
    cascade(hand);
    int n = (int)hand.size();
    cout << n << " ";
    rep(i,0,n) {
        cout << hand[i] << " ";
    }
    return 0;
}

void cascade(vector<string>& hand) {
    int n = (int)hand.size();
    rrep(i,n-1,2) {
        if(hand[i].at(0) == hand[i-3].at(0)) {
            hand.erase(hand.begin() + i);
            hand.erase(hand.begin() + i-1);
            hand.erase(hand.begin() + i-2);
            hand.erase(hand.begin() + i-3);
            cascade(hand);
            break;
        } else if(hand[i].at(1) == hand[i-3].at(1)) {
            hand.erase(hand.begin() + i);
            hand.erase(hand.begin() + i-3);
            cascade(hand);
            break;
        }
    }
}

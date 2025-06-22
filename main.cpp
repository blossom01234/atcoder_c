#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define all(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << endl;
using ll = long long;
const int INF = 1e9;
const ll LINF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    int A[100009], B[100009];
    vector<int> G[100009];
    cin >> N >> M;
    rep(i, M) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    rep1(i, N) {
        cout << i << ": {";
        for (int j = 0; j < (int)G[i].size(); j++) {
            if (j >= 1) cout << ",";
            cout << G[i][j];
        }
        cout << "}\n";
    }
}
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

map<int, vector<int>> G;
int N, M, A, B;
vector<int> dist(1000009, -1);

int main() {
    cin >> N >> M;
    rep(i, M) {
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    queue<int> Q;
    Q.push(1);
    dist[1] = 0;
    while (!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (auto next : G[pos]) {
            if (dist[next] == -1) {
                dist[next] = dist[pos] + 1;
                Q.push(next);
            }
        }
    }

    rep1(i, N) cout << dist[i] << endl;
}
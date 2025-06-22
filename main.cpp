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

struct Point { bool visited=false; vector<int> vec; };
map<int, Point> G;

void dps(Point& point) {
    point.visited = true;
    for (auto vec : point.vec) {
        if (!G[vec].visited) dps(G[vec]);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    int A, B;
    rep(i, M){
        cin >> A >> B;
        G[A].vec.push_back(B);
        G[B].vec.push_back(A);
    }
    dps(G[A]);
    for (auto&[key, value] : G){
        if(!value.visited) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
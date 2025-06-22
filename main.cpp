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

struct Point { int x, y; };
int main() {
    vector<Point> points;
    points.push_back({1, 2});
    points.push_back({3, 4});
    for_each(all(points), [](const Point& point) {
        cout << point.x << point.y << endl;
    });
}
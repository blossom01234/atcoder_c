# AtCoder C++使い方

## 実行について
### 通常のコンパイル実行方法
```bash
g++ -std=c++17 -Wall -Wextra -O2 -o main main.cpp
./main
```

### Makerunを使ったコンパイル、実行方法
```bash
make run    # コンパイル＋実行
make        # コンパイルだけ
make clean  # 実行ファイル削除
```

## コードテンプレート
### main.cppのテンプレ
```cpp
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
    ios::sync_with_stdio(false); // scanf printfと同期しない設定。cin coutが速くなる
    cin.tie(nullptr); // cin の前に cout を 自動フラッシュしなくなる。無駄な flush を避けて、読み込みが速くなる
}
````

## 実装メモ
```cpp
    // for_each
    for_each(all(points), [](const Point& point) {
        cout << point.x << point.y << endl;
    });
```
#include <bits/stdc++.h>
using namespace std;
int main() {
    int W, H;
    cin >> W >> H;
    int cw = 60;
    int ch = 130;
    if (cw <= W && ch >= H) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

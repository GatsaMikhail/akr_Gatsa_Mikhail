#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

signed main() {
    int a, b;
    cin >> a >> b;
    int counter = 0, differ = 0, num = 0, x=0;
    for (int i = a; i <= b; ++i) {
        x = i;
        vector<int> p;
        for (int j = 2; j <= sqrt(x); ++j) {
            while (x % j == 0) {
                p.push_back(j);
                x /= j;
            }
        }
        if (x != 1)
            p.push_back(x);
        bool ok = p.size() == 3;
        for (int j = 1; j < (int) p.size(); ++j)
            ok &= p[j - 1] != p[j], ok &= p[j - 1] % 10 == p[j] % 10;
        if (ok) {
            ++counter;
            if (differ < p[2] - p[0]) {
                differ = p[2] - p[0];
                num = i;
            }
        }
    }
    cout << counter << ' ' << num;
}


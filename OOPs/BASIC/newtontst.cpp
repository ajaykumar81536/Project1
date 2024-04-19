#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int countBalancedSubstrings(const string &s, int x, int y) {
    int n = s.length();
    unordered_map<double, int> ratioCount;
    int count0 = 0, count1 = 0;
    int result = 0;

    // Handle the case of a balanced substring that starts from the beginning
    ratioCount[static_cast<double>(x) / y] = 1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            ++count0;
        } else {
            ++count1;
        }

        double ratio = static_cast<double>(count0) / count1;

        if (ratioCount.find(ratio) != ratioCount.end()) {
            result += ratioCount[ratio];
        }

        ratioCount[static_cast<double>(x * count1) / (y * count0)]++;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    string s;
    cin >> s;

    int ans = countBalancedSubstrings(s, x, y);
    cout << ans << endl;

    return 0;
}

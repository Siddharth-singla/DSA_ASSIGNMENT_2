#include <iostream>
#include <string>
using namespace std;
bool isInBoth(const string& part, const string& x, const string& y) {
    return (x.find(part) < x.size()) && (y.find(part) < y.size());
}

bool canSplit(const string& s) {
    int n = s.size();
    if (n < 3) return false;         

    for (int i = 1; i < n - 1; ++i) {      
        for (int j = i + 1; j < n; ++j) { 
            string A = s.substr(0, i);
            string B = s.substr(i, j - i);
            string C = s.substr(j);

            if (isInBoth(A, B, C) || isInBoth(B, A, C) || isInBoth(C, A, B))
                return true;
        }
    }
    return false;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (canSplit(s))
        cout << "Yes, possible to split\n";
    else
        cout << "Not possible\n";

    return 0;
}

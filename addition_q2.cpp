#include <bits/stdc++.h>
using namespace std;

bool canSplit(string s) {
    int n = s.size();
    for (int i = 1; i < n - 1; i++) {           
        for (int j = i + 1; j < n; j++) {      
            string A = s.substr(0, i);
            string B = s.substr(i, j - i);
            string C = s.substr(j);

            // Check each possibility
            if ((B.find(A) != string::npos && C.find(A) != string::npos) ||
                (A.find(B) != string::npos && C.find(B) != string::npos) ||
                (A.find(C) != string::npos && B.find(C) != string::npos)) {
                return true;
            }
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

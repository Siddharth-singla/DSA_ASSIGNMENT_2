#include <bits/stdc++.h>
using namespace std;

class SymmetricMatrix {
    vector<int> data; 
    int n;

    int index(int i, int j) const {
        return (i * (i + 1)) / 2 + j; 
    }

public:
    SymmetricMatrix(int size) : n(size) {
        data.resize(n * (n + 1) / 2);
    }

    void set(int i, int j, int value) {
        if (i >= j) data[index(i, j)] = value;
        else        data[index(j, i)] = value; 
    }

    int get(int i, int j) const {
        return (i >= j) ? data[index(i, j)] : data[index(j, i)];
    }

    void print() const {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << get(i, j) << " ";
            cout << "\n";
        }
    }
};

int main() {
    int n = 4;
    SymmetricMatrix sm(n);

    sm.set(0, 0, 1);
    sm.set(1, 0, 2); sm.set(1, 1, 3);
    sm.set(2, 0, 4); sm.set(2, 1, 5); sm.set(2, 2, 6);
    sm.set(3, 0, 7); sm.set(3, 1, 8); sm.set(3, 2, 9); sm.set(3, 3, 10);

    cout << "Symmetric Matrix:\n";
    sm.print();
    return 0;
}


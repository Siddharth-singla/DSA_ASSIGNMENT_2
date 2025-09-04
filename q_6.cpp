#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int n1;
    cin >> n1;
    int A[30][3];
    A[0][0] = rows; A[0][1] = cols; A[0][2] = n1;
    for (int i = 1; i <= n1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    int n2;
    cin >> n2;
    int B[30][3];
    B[0][0] = rows; B[0][1] = cols; B[0][2] = n2;
    for (int i = 1; i <= n2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    int trans[30][3];
    trans[0][0] = cols; trans[0][1] = rows; trans[0][2] = n1;
    int k = 1;
    for (int c = 0; c < cols; c++) {
        for (int i = 1; i <= n1; i++) {
            if (A[i][1] == c) {
                trans[k][0] = A[i][1];
                trans[k][1] = A[i][0];
                trans[k][2] = A[i][2];
                k++;
            }
        }
    }

    cout << "Transpose:\n";
    for (int i = 0; i <= n1; i++)
        cout << trans[i][0] << " " << trans[i][1] << " " << trans[i][2] << "\n";

    int C[60][3];
    C[0][0] = rows; C[0][1] = cols; C[0][2] = 0;
    int i = 1, j = 1, p = 1;

    while (i <= n1 && j <= n2) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[p][0] = A[i][0]; C[p][1] = A[i][1]; C[p][2] = A[i][2];
            i++; p++;
        } else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
            C[p][0] = B[j][0]; C[p][1] = B[j][1]; C[p][2] = B[j][2];
            j++; p++;
        } else {
            int sum = A[i][2] + B[j][2];
            if (sum != 0) {
                C[p][0] = A[i][0]; C[p][1] = A[i][1]; C[p][2] = sum;
                p++;
            }
            i++; j++;
        }
    }
    while (i <= n1) { C[p][0] = A[i][0]; C[p][1] = A[i][1]; C[p][2] = A[i][2]; i++; p++; }
    while (j <= n2) { C[p][0] = B[j][0]; C[p][1] = B[j][1]; C[p][2] = B[j][2]; j++; p++; }
    C[0][2] = p - 1;

    cout << "Addition:\n";
    for (int t = 0; t < p; t++)
        cout << C[t][0] << " " << C[t][1] << " " << C[t][2] << "\n";

    return 0;
}

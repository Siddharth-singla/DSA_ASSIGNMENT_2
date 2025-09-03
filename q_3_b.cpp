#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n-1; i++) {
        cout<<"element no. "<<i+1<<": ";
        cin >> arr[i];
    }

    int low = 0, high = n-2; 
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1) {
 
            low = mid + 1;
        } else {
           
            high = mid - 1;
        }
    }

cout<<low+1;
    return 0;
}

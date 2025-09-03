#include <bits/stdc++.h>

using namespace std;

int main() {
	int k,n;
	int count = 0;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter difference: ";
	cin>>k;
	int arr[n];

	for(int i = 0; i<n; i++) {
		cout<<"enter element no."<<i+1<<endl;
		cin>>arr[i];
	}
	for(int i = 0; i<7; i++) {
		for(int j = i; j<7; j++) {
			if(arr[i]-arr[j]==k || arr[i]-arr[j]== -k) {

				count++;
			}
		}
	}
	cout<<"no. of pairs are: "<<count;
	return 0;
}



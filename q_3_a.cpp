#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	cout<<"enter the no. of terms in array";
	cin>>n;
	int arr[n];
	int Sum_of_n_terms = n*(n+1)/2;
	for(int i = 0; i<n-1; i++) {
		cout<<"enter element no. :"<<i+1<<endl;
		cin>>arr[i];
	}
	for(int i = 0; i<n-1; i++) {
		sum = sum + arr[i];
	}
	int missing_no = Sum_of_n_terms - sum;
	cout<<"the missing no. is: "<< missing_no;
	return 0;

}



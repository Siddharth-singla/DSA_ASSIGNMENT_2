#include <iostream>
using namespace std;

int main() {
	int n;
    cout<<"enter size of array";
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
	    cout<<"enter element no. : "<<i+1<<" ";
	    cin>>arr[i];
	}
	int count = 0;
	for(int i = 0; i<n; i++){
	    for(int j = 0; j<n ; j++){
	        if(i<j && arr[i]>arr[j]){
	            count++;
	        }
	    }
	}
cout<<count;
	

	return 0;

}



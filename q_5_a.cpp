#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout<<"enter rows";
	cin>>n;
	cout<<"enter columns";
	cin>>m;
	int arr[n][m];
	if(n!=m){
	    cout<<"not a square matrix";
	    return 0;
	}

	for(int i = 0;i<n;i++){
	    for(int j = 0; j<m;j++){

	    if(i==j){
           cin>>arr[i][j];
	   }
	   else{
	       arr[i][j]=0;
	   }

 }

}

	for(int i = 0;i<n;i++){
	    for(int j = 0; j<m;j++){

	    cout<<arr[i][j]<<" ";
	    }cout<<endl;


	}

	return 0;

}



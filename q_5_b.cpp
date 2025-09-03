#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout<<"enter rows";
	cin>>n;
	cout<<"enter columns";
	cin>>m;
	
	int size = 3*n-2;
	int arr[size];
	if(n!=m){
	    cout<<"not a square matrix";
	    return 0;
	}
	for(int i = 0; i<size;i++){
	    cin>>arr[i];
	}
	
int k =0;
	for(int i = 0;i<n;i++){
	    for(int j = 0; j<m;j++){
	    if(i-j<=1 && i-j>=-1){
           cout<<arr[k++];
           
	   }
	   else{
	       cout<<'0';
	   }
	   
	    }
	    
	    cout<<endl;


	}

	return 0;

}



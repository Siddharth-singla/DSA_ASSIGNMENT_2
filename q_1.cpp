#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter size of array";
   cin>>n;
   int arr[n];
   for(int i = 0; i< n; i++){
       cout<<"enter element no.: "<<i+1<<" ";
       cin>>arr[i];
   }cout<<endl;
   int x;
   cout<<"enter element to search : ";
   cin>>x;
   int st = 0 , end = n-1;
   while(st<end){
       int mid = end + (st-end)/2;
       if(x == arr[mid]){
           cout<<"element found at index : "<<mid;
           return 0;
       }
       if(x>mid){
           st = mid+1;
       }
       else{
           end = mid-1;
       }
   }
   cout << "Element not found in array." << endl;
    return 0;
}
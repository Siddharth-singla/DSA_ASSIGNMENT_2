#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main(){
    vector<int> v={0,0,1,2,0,2,1};
     sort(v.begin(),v.end());
     for(int i : v){
         cout<<i;
     }
     return 0;
 }
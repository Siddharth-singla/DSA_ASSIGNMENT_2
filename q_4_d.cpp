#include <iostream>
#include<string>
using namespace std;

int main()
{
    string string1;
    getline(cin,string1);
    for(int i = 0; i< string1.size();i++){
        for(int j = i+1;j<string1.size();j++){
            if(string1[i]>string1[j]){
                swap(string1[i],string1[j]);
            }
        }
        
    }

    cout<<string1;

    return 0;
}
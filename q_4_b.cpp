#include <iostream>
#include<string>
using namespace std;

int main()
{
    string reverse;
    getline(cin,reverse);
    int i = 0 ,j = reverse.size()-1;
    while(i<=j){
        swap(reverse[i],reverse[j]);
        i++;
        j--;
    }
    cout<<reverse;

    return 0;
}
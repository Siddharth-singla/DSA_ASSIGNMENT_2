#include <iostream>
#include<string>
using namespace std;

int main()
{
    string string1 , result;
    getline(cin,string1);
    int n = string1.size();
    for(int i = 0; i<n;i++){
        char ch = tolower(string1[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            result += string1[i];
        }



}
    cout<<result;
    return 0;
}

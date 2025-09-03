#include <iostream>
#include<string>
using namespace std;

int main()
{
    string string1;
    string string2;
    getline(cin,string1);
    getline(cin,string2);
string1 = string1 + " " + string2;
    cout<<string1;

    return 0;
}
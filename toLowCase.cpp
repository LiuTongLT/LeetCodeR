
#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string str) {
    for(int i = 0; i<str.length();i++)
    {
        if(str[i]<='Z'&&str[i]>='A')
        {
            str[i]+=' ';
        }
    }
    return str;
}

int main()
{
    string s1 = "adhaABDG";
    string s2 = toLowerCase(s1);
    cout<<s2<<endl;
    return 0;
}

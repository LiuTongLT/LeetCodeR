
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int numUniqueEmails(vector<string>& emails) {
    int count = 0;
    set<string> newEmails;
    for(int i = 0;i<emails.size();i++)
    {
        string cur = emails[i];
        for(int j = 0;j<emails[i].length();j++)
        {
            if(emails[i][j] == '@')
            {
                string localName = emails[i].substr(0,j);
                string domainName = emails[i].substr(j+1);
                for(int a = 0; a<localName.length();a++)
                {
                    if(localName[a]=='.')
                    {
                        localName = localName.substr(0,a)+localName.substr(a+1);
                    }
                    else if(localName[a]=='+')
                    {
                        localName = localName.substr(0,a);
                    }
                }
                string newEmail = localName+"@"+domainName;
                newEmails.insert(newEmail);
            }
        }
    }
    count = newEmails.size();
    return count;
}

int main()
{
    string a = "sh.a.b+jdfe.yhnd@sjadbhla.com";
    for(int j = 0;j<a.length();j++)
    {
        if(a[j] == '@')
        {
            string localName = a.substr(0,j);
            cout<<localName<<endl;
            string domainName = a.substr(j+1);
            cout <<domainName<<endl;
            
            for(int a = 0; a<localName.length();a++)
            {
                if(localName[a]=='.')
                {
                    localName = localName.substr(0,a)+localName.substr(a+1);
                }
                else if(localName[a]=='+')
                {
                    localName = localName.substr(0,a);
                }
            }
            string newEmail = localName+"@"+domainName;
            cout<<newEmail<<endl;
        }
    }
    
    return 0;
}

#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string sen;
    getline(cin, sen);
    reverse(sen.begin(), sen.end());
    int ben = 0, en = 0;
    for (int i = 0; i<sen.length();i++ )
    {
        if (sen[i]==' ')
        {
            en = i;
            string s = sen.substr(ben, en - ben);
            reverse(s.begin(),s.end());
            cout << s<<" ";
            ben = i + 1;
        }
    }
    string s = sen.substr(ben, sen.length() - ben);
    reverse(s.begin(), s.end());
    cout << s;
}
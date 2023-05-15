#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            mp[s[i]]++;
        }
    }
    int ma = -1;
    char c;
    for (map<char,int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second>ma)
        {
            c = it->first;
            ma = it->second;
        }
    }
    cout << c << " " << ma;
}
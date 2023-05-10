#include<map>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (map<char,int>::iterator it=mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << ":" << it->second << endl;
    }
}
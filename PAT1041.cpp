#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
struct stu
{
    string zhunkao;
    int hao;
};

int main(){
    int n;
    cin >> n;
    unordered_map<int, stu> mp;
    for (int i = 0; i < n; i++)
    {
        stu s;
        int key;
        cin >> s.zhunkao >> key >> s.hao;
        mp[key] = s;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        cout << mp[tem].zhunkao << " " << mp[tem].hao << endl;
    }
    
}
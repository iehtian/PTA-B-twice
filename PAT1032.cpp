#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int bian, grade;
        cin >> bian >> grade;
        mp[bian] += grade;
    }
    int zuida = -1, bianhao;
    for (unordered_map<int,int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second>zuida)
        {
            zuida = it->second;
            bianhao = it->first;
        }
    }
    cout << bianhao << " " << zuida;
}
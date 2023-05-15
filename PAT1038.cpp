#include<algorithm>
#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        mp[tem]++;
    }
    cin >> n;
    int tem;
    cin >> tem;
    printf("%d", mp[tem]);
    for (int i = 1; i < n; i++)
    {
        cin >> tem;
        printf(" %d", mp[tem]);
    }
    
}
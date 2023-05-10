#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s;
    for (int i = 0; i < 10; i++)
    {
        int tem;
        cin >> tem;
        for (int j = 0; j < tem; j++)
        {
            s += i + 48;
        }
    }
    int k = s.find_first_not_of("0");
    string res;
    res += s[k];
    s.erase(s.begin() + k);
    res += s;
    cout << res;
}
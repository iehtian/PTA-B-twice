#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string num;
    int num2;
    cin >> num >> num2;
    string s,res;
    for (int i = 0; i < num.length(); i++)
    {
        s += num[i];
        int k = stod(s);
        if (k<num2)
        {
            res += '0';
        }
        else{
            int tem = k / num2;
            res += to_string(tem);
            tem = k % num2;
            s = to_string(tem);
        }
    }
    if (res[0]=='0'&&res.length()!=1)
        res = res.substr(1);
    int j = stoi(s);
    cout << res << " " << j;
}
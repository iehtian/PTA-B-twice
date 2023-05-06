#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    int num1, num2;
    cin >> s1 >> num1 >> s2 >> num2;
    long long res1=0, res2=0;
    for (int i = 0; i < s1.length(); i++)
    {
        // string s3 = to_string(num1);
        if (s1[i]==num1+48)
        {
            res1 = res1 * 10 + num1;
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        // string s3 = to_string(num1);
        if (s2[i]==num2+48)
        {
            res2 = res2 * 10 + num2;
        }
    }
    cout << res1 + res2;
}
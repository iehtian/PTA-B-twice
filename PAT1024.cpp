#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c = s[0];
    int e = s.find("E");
    string s1 = s.substr(3, e - 3);
    char d = s[e + 1];
    int zhishu = stoi(s.substr(e + 1, s.length() - e - 1));
    if (zhishu==0)
    {
        printf("0.");
        for (int i = 0; i < s1.length(); i++)
        {
            printf("0");
        }
        return 0;
    }
    if (d=='-')
    {
        if (c=='-')
        {
            printf("-0.");
        }
        else{
            printf("0.");
        }
        for (int i = 1; i < abs(zhishu); i++)
        {
            printf("0");
        }
        cout << s[1] << s1;
    }
    else{
        if (c=='-')
        {
            printf("-");
        }
        if (zhishu>=s1.length())
        {
            cout << s[1] << s1;
            for (int i = 0; i < zhishu-s1.length(); i++)
            {
                printf("0");
            }
        }
        else{
            cout << s[1];
            for (int i = 0; i < zhishu; i++)
            {
                cout << s[i+3];
            }
            cout << ".";
            for (int i = zhishu; i < s1.length(); i++)
            {
                cout << s[i+3];
            }
        }
    }
}
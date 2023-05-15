#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,tag=0;
    cin >> n;
    string s1 = "10X98765432";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>> s;
        if (s.substr(0,16).find_first_not_of("0123456789")!=-1)
        {
            cout << s<<endl;
            tag = 1;
            continue;
        }
        int k = (s[0] - 48) * 7 + (s[1] - 48) * 9 + (s[2] - 48) * 10 + (s[3] - 48) * 5 + (s[4] - 48) * 8 + (s[5] - 48) * 4 + (s[6] - 48) * 2 +
                (s[7] - 48) + (s[8] - 48) * 6 + (s[9] - 48) * 3 + (s[10] - 48) * 7 + (s[11] - 48) * 9 + (s[12] - 48) * 10 + (s[13] - 48) * 5 + (s[14] - 48) * 8 + (s[15] - 48) * 4 + (s[16] - 48) * 2;
        k = k % 11;
        if (s[17]==s1[k])
        {
            continue;
        }
        else{
            cout << s << endl;
            tag = 1;
        }
    }
    if (tag==0)
    {
        cout << "All passed";
    }
    
}
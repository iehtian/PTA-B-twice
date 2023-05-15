#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int res=0;
    string zuinaianzhang, zuinianqing;
    int n;
    cin >> n;
    string zuidi = "2014/09/06", zuida = "1814/09/06";
    string age1="1814/09/05", age2="2014/09/07";
    string name1, name2;
    for (int i = 0; i < n; i++)
    {
        string s,time;
        cin >> s >> time;
        if (time>=zuida&&time<=zuidi)
        {
            res++;
            if (time>age1)
            {
                age1 = time;
                name1 = s;
            }
            if (time<age2)
            {
                age2 = time;
                name2 = s;
            }
        }
    }
    if (res==0)
    {
        printf("0");
        return 0;
    }
    cout << res << " " << name2 << " " << name1;
}
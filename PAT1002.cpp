#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        res += (int)s[i]-48;
    }
    s = to_string(res);
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '0':
            printf("ling");
            break;
        case '1':printf("yi");
            break;
        case '2':printf("er");
        break;
        case '3': printf("san");
            break;
        case '4': printf("si");
            break;
        case '5': printf("wu");
            break;
        case '6': printf("liu");
            break;
        case '7': printf("qi");
            break;
        case '8': printf("ba");
            break;
        case '9': printf("jiu");
        break;
            default:
            break;
        }
        if (i!=s.length()-1)
        {
            printf(" ");
        }
        
    }
    
}
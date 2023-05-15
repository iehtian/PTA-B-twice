#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    // cin >> s1 >> s2;
        getline(cin, s1);
        getline(cin, s2);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    for (int i = 0,j=0; i < s2.length(); i++)
    {
        if (s1.find(s2[i])!=-1)
        {
            continue;
        }
        else if (s2[i]>='A'&&s2[i]<='Z'&&s1.find("+")!=-1)
        {
            continue;
        }
        else if (s2[i]>='A'&&s2[i]<='Z'&&s1.find(s2[i]+32)!=-1)
        {
            continue;
        }
        
        else{
            cout << s2[i];
        }
    }
    
}
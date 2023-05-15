#include<algorithm>
#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;
int main(){
    string sen1, sen2;
    cin >> sen1 >> sen2;
    transform(sen1.begin(), sen1.end(), sen1.begin(),::toupper);
    transform(sen2.begin(), sen2.end(), sen2.begin(),::toupper);
    unordered_map<char,int> se;
    queue<char> que;
    for (int i = 0,j=0; i < sen1.length(); i++)
    {
        if (sen1[i]==sen2[j])
        {
            j++;
            continue;
        }
        else
        {
            if (se.find(sen1[i])==se.end())
            {
                que.push(sen1[i]);
            }
            se[sen1[i]]++;
        }
    }
    while (que.empty()!=true)
    {
        cout << que.front();
        que.pop();
    }
}
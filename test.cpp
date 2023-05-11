#include<stdio.h>
#include<string>
#include<unordered_map>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    double x,res,coun=0;
    while (cin>>x)
    {
        res += x;
        coun++;
        if (cin.get()=='\n')
        {
            break;
        }
        
    }
    res = res / coun;
    cout << res;
}
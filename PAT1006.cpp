#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string num;
    cin >> num;
    while (num.length()<3)
    {
        num = "0" + num;
    }
    for (int i = 0; i < num[0]-48; i++)
    {
        printf("B");
    }
    for (int i = 0; i < num[1]-48; i++)
    {
        printf("S");
    }
    for (int i = 1; i < (int)num[2]-48+1; i++)
    {
        printf("%d", i);
    }
    
}
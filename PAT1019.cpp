#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while (1)
    {
        string s1 = to_string(n);
        while (s1.length()<4)
        {
            s1 += '0';
        }
        
        sort(s1.begin(), s1.end());
        int tem = stod(s1);
        reverse(s1.begin(),s1.end());
        int k = stod(s1);
        n = k - tem;
        printf("%04d - %04d = %04d\n", k , tem, n);
        if (n==0||n==6174)
        {
            return 0;
        }
        
    }
}
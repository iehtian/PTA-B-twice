#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int, int> mp;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> a[i];
        
    }
    int b[n]={0};
    for (int i=0; i <n; i++)
    {
        int tem=a[i];
        for (; tem!=1; )
        {
            if (tem==1)
            {
                continue;
            }
            if (tem%2==0)
                tem = tem / 2;
            else
                tem = (tem * 3 + 1) / 2;
            int *p = find(a, a + n, tem);
            if (p-a!=n)
            {
                b[p - a] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i]==0)
        {
            b[i] = a[i];
        }
        
    }
    
    sort(b, b + n, greater<int>());
    printf("%d", b[0]);
    for (int i = 1; i < n; i++)
    {
        if (b[i]==-1)
            break;
        else
            printf(" %d", b[i]);
    }
    
}
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    m = m % n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (m==0)
    {
        printf("%d", a[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %d", a[i]);
        }
        return 0;
    }
    printf("%d", a[n - m]);
    for (int i = n-m+1; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    for (int i = 0; i < n-m; i++)
    {
        printf(" %d", a[i]);
    }
    
}
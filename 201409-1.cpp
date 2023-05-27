#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(abs(a[i]-a[j])==1)
                res++;
        }
    }
    cout << res / 2;
}
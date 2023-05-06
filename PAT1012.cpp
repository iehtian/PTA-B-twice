#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = -1;
    int a2tem=0,a4con=0,a1con=0,a3con=0,a5con=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%5==0&&a[i]%2==0)
        {
            a1 += a[i];
            a1con++;
        }
        else if (a[i]%5==1)
        {
            if(a2tem%2==0)
                a2 += a[i];
            else
                a2 = a2 - a[i];
            a2tem++;
        }
        else if (a[i]%5==2)
        {
            a3++;
        }
        else if (a[i]%5==3)
        {
                a4 += a[i];
                a4con++;
        }
        else if (a[i]%5==4)
        {
            a5 = max(a5, a[i]);
            a5con++;
        }
    }
    if (a1con==0)
    {
        printf("N ");
    }
    else{
        printf("%d ", a1);
    }
    if (a2tem==0)
    {
        printf("N ");
    }
    else{
        printf("%d ", a2);
    }
    if (a3==0)
    {
        printf("N ");
    }
    else{
        printf("%d ", a3);
    }
    if (a4con==0)
    {
         printf("N ");
    }
    else{
         printf("%.1f ", (double)a4 / (double)a4con);
    }
    if (a5con==0)
    {
         printf("N");
    }
    else{
         printf("%d", a5);
    }
    // printf("%d %d %d %.1f %d", a1, a2, a3, a4f, a5);
}
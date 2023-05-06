#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
bool judge(int n){
    if (n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for (int i = 3; i <=sqrt(n); i=i+2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n,con=0;
    cin >> n;
    for (int i = 5; i <= n; i++)
    {
       if (judge(i)&&judge(i-2))
       {
            con++;
       }
       
    }
    printf("%d", con);
}
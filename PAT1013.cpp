#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
bool judge(int n){
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for (int i = 3; i <= sqrt(n); i=i+2)
        if(n%i==0)
            return false; 
    return true;
}
int main(){
    int n, m;
    cin >> n >> m;
    int con = 0,i=2;
    while (con<m)
    {
        if (judge(i))
        {
            con++;
            if (con>=n&&(con-n)%10!=9&&con!=m)
            {
                printf("%d ", i);
            }
            else if ((con>n&&(con-n)%10==9)||con==m)
            {
                printf("%d\n", i);
            }
        }
        i++;
        }
}
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin >> n >> c;
    int k = 1;
    int cont = 0;
    int tem = 0;
    // if (n==1)
    // {
    //     printf("%c\n", c);
    //     printf("0");
    //     return 0;
    // }
    for (; k<=n ; k+=2*(2*cont+1))
    {
        tem = k;
        cont++;
    }
    for (int i = cont; i >0; i--)
    {
        for (int j = 0; j < cont-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (int i = 2; i < cont+1; i++)
    {
        for (int j = 0; j < cont-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    int res = n-tem;
    printf("%d", res);
}
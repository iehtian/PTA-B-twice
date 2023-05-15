#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double n;
    char c;
    cin >> n >> c;
    double m = round(n / 2);
    for (int i = 0; i < (int)n; i++)
    {
        printf("%c", c);
    }
    printf("\n");
    for (int i = 0; i < (int)m-2; i++)
    {
        printf("%c", c);
        for (int j = 0; j < (int)n-2; j++)
        {
            printf(" ");
        }
        printf("%c\n", c);
    }
    for (int i = 0; i < (int)n; i++)
    {
        printf("%c", c);
    }
}
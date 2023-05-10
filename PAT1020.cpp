#include<algorithm>
#include<iostream>
using namespace std;
typedef struct mooncake
{
    double zongliang;
    double danjia;
};
bool cmp(mooncake m1,mooncake m2){
    return m1.danjia > m2.danjia;
}
int main(){
    double n, k;
    cin >> n >> k;
    double a[(int)n],b[(int)n];
    for (int i = 0; i < (int)n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (int)n; i++)
    {
        cin >> b[i];
    }
    mooncake moon[(int)n];
    for (int i = 0; i < (int)n; i++)
    {
        moon[i].danjia = b[i] / a[i];
        moon[i].zongliang = a[i];
    }
    sort(moon, moon + (int)n, cmp);
    double res = 0;
    for (int i = 0; k!=0&&i<(int)n; i++)
    {
        if (k<=moon[i].zongliang)
        {
            res += k * moon[i].danjia;
            k = 0;
        }
        else{
            res += moon[i].zongliang*moon[i].danjia;
            k = k - moon[i].zongliang;
        }
    }
    printf("%.2f", res);
}
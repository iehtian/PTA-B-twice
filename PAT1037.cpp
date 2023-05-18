#include<iostream>
#include<iostream>
using namespace std;
struct money
{
    int a, b, c;
};
bool cmp(money m1,money m2){
    if (m1.a<m2.a)
    {
        return true;
    }else if (m1.a==m2.a)
    {
        if (m1.b<m2.b)
        {
            return true;
        }
        else if (m1.b==m2.b)
        {
            if (m1.c<m2.c)
            {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}
int main(){
    money m1, m2,res;
    scanf("%d.%d.%d", &m1.a, &m1.b, &m1.c);
    scanf("%d.%d.%d", &m2.a, &m2.b, &m2.c);
    int tag = 0;
    if (cmp(m1,m2))
    {
        swap(m1.a, m2.a);
        swap(m1.b, m2.b);
        swap(m1.c, m2.c);
        tag = 1;
    }
    if (m1.c-m2.c<0)
    {
        res.c = m1.c - m2.c + 29;
        m1.b--;
    }
    else{
        res.c = m1.c - m2.c;
    }
    if (m1.b-m2.b<0)
    {
        res.b = m1.b - m2.b + 17;
        m1.a--;
    }
    else{
        res.b = m1.b - m2.b;
    }
    res.a = m1.a - m2.a;
    if (res.a==0&&res.b==0&&res.c==0)
    {
        printf("0.0.0");
        return 0;
    }
    if (tag==0)
    {
        printf("-%d.%d.%d", res.a, res.b, res.c);
    }
    else{
        printf("%d.%d.%d", res.a, res.b, res.c);
    }
}
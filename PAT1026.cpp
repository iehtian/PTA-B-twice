#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    double c= b - a;
    c = c / 100;
    c = round(c);
    int d = (int)c;
    int h = d / 3600;
    d = d % 3600;
    int m = d / 60;
    int s = d % 60;
    printf("%02d:%02d:%02d", h, m, s);
}
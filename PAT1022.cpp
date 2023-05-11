#include<algorithm>
#include<iostream>
#include<string>
#include <stack>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int t;
    cin >> t;
    int c = a + b;
    if (c==0)
    {
        printf("0");
        return 0;
    }
    stack<int> st;
    while (c!=0)
    {
        st.push(c % t);
        c = c / t;
    }
    while (st.size()!=0)
    {
        cout << st.top();
        st.pop();
    }
}
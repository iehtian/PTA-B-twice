#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int a, b;
    while (cin>>a>>b)
    {
        // cin >> b;
        if (b!=0)
        {
            a = a * b;
            b--;
            vec.push_back(a);
            vec.push_back(b);
        }
        if(cin.get() == '\n'){
			break;
		}
    }
    if (vec.size()==0)
    {
        printf("0 0");
        return 0;
    }
    printf("%d %d", vec[0], vec[1]);
    for (int i = 2; i < vec.size(); i++)
    {
        printf(" %d", vec[i]);
    }
    
}
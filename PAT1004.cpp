#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ma = -1, mi = 101;
    string maname,makemu, miname,mikemu;
    for (int i = 0; i < n; i++)
    {
        string name,kemu;
        int score;
        cin >> name >>kemu>> score;
        if (score>ma)
        {
            ma = score;
            maname = name;
            makemu = kemu;
        }
        if (score<mi)
        {
            mi = score;
            miname = name;
            mikemu = kemu;
        }
        
    }
    cout << maname << " " << makemu << endl;
        cout << miname << " " << mikemu;
}
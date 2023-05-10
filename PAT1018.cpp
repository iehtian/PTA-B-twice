#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    // cin >> n;
    int jiawin = 0, jiaping = 0, jialose = 0;
    int jiac=0, jiaj=0, jiab=0, yic=0, yij=0, yib = 0;
    for (int i = 0; i < n; i++)
    {
        char jiachu, yichu;
        // cin >> jiachu >> yichu;
        getchar();
        jiachu = getchar();
        getchar();
        yichu = getchar();
        if (jiachu==yichu)
        {
            jiaping++;
        }
        else if (jiachu=='C'&&yichu=='J')
        {
            jiawin++;
            jiac++;
        }
        else if (jiachu=='C'&&yichu=='B')
        {
            jialose++;
            yib++;
        }
        else if (jiachu=='J'&&yichu=='C')
        {
            jialose++;
            yic ++;
        }
        else if (jiachu=='J'&&yichu=='B')
        {
            jiawin++;
            jiaj ++;
        }
        else if (jiachu=='B'&&yichu=='J')
        {
            jialose++;
            yij += 'J';
        }
        else if (jiachu=='B'&&yichu=='C')
        {
            jiawin++;
            jiab ++;
        }
    }
    printf("%d %d %d\n", jiawin, jiaping,jialose);
    printf("%d %d %d\n", jialose, jiaping, jiawin);
    if(jiab>=jiac&&jiab>=jiaj){
        printf("B ");
    }else if(jiac>jiab&&jiac>=jiaj){
        printf("C ");
    }else if(jiaj>jiab&&jiaj>jiac){
        printf("J ");
    }
    if(yib>=yic&&yib>=yij){
        printf("B");
    }else if(yic>yib&&yic>=yij){
        printf("C");
    }else if(yij>yib&&yij>yic){
        printf("J");
    }
}
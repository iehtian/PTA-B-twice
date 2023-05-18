#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int tag1 = 0, tag2 = 0, tag3 = 0, tag4 = 0, tag5 = 0, tag6 = 0;
    while (1)
    {
        if (s.find("P")!=-1&&tag1==0)
        {
            printf("P");
            s.erase(s.begin()+s.find("P"));
        }
        else{
            tag1 = 1;
        }
        if (s.find("A")!=-1&&tag2==0)
        {
            printf("A");
            s.erase(s.begin()+s.find("A"));
        }
        else{
            tag2 = 1;
        }
        if (s.find("T")!=-1&&tag3==0)
        {
            printf("T");
            s.erase(s.begin()+s.find("T"));
        }
        else{
            tag3 = 1;
        }
        // if (s.find("t")!=-1&&tag4==0)
        // {
        //     printf("t");
        //     s.erase(s.begin()+s.find("t"));
        // }
        // else{
        //     tag4 = 1;
        // }
        if (s.find("e")!=-1&&tag5==0)
        {
            printf("e");
            s.erase(s.begin()+s.find("e"));
        }
        else{
            tag5 = 1;
        }
        if (s.find("s")!=-1&&tag6==0)
        {
            printf("s");
            s.erase(s.begin()+s.find("s"));
        }
        else{
            tag6 = 1;
        }
        if (s.find("t")!=-1&&tag4==0)
        {
            printf("t");
            s.erase(s.begin()+s.find("t"));
        }
        else{
            tag4 = 1;
        }
        if (tag1==1&&tag2==1&&tag3==1&&tag4==1&&tag5==1&&tag6==1)
        {
            return 0;
        }
    }
    
}
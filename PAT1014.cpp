#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main(){
    string s1, s2, s3, s4;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    getline(cin, s4);
    int len = min(s1.length(), s2.length());
    int tag = 0;
    for (int i = 0; i < len; i++)
    {
        if (s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'&&tag==0)
        {
            switch (s1[i])
            {
                case 'A':
                    printf("MON");
                    break;
                case 'B':
                    printf("TUE");
                    break;
                case 'C':
                    printf("WED");
                    break;
                case 'D':
                    printf("THU");
                    break;
                case 'E':
                    printf("FRI");
                    break;
                case 'F':
                    printf("SAT");
                    break;
                case 'G':
                    printf("SUN");
                    break;
                default:
                break;
            }
            tag = 1;
            continue;
        }
        if (s1[i]==s2[i]&&((s1[i]>='0'&&s1[i]<='9')||(s1[i]>='A'&&s1[i]<='N'))&&tag==1)
        {
            int k;
            if (s1[i]<='9'&&s1[i]>='0')
                k = s1[i] - 48;
            else
                k = s1[i] - 65+10;
            printf(" %02d:",k);
            break;
        }   
    }
    len = min(s3.length(), s4.length());
    for (int i = 0; i < len; i++)
    {
        if (s3[i]==s4[i]&&((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z')))
        {
            printf("%02d", i);
            break;
        }
    }
}
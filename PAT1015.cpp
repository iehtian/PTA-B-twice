#include<algorithm>
#include<iostream>
using namespace std;
struct stu
{
    string id;
    int de, cai;
    int grade;
};
bool cmp(stu s1,stu s2){
    return s1.grade < s2.grade;
}
bool cmp2(stu s1,stu s2){
    if (s1.cai+s1.de<s2.cai+s2.de)
    {
        return false;
    }
    else if (s1.cai+s1.de==s2.cai+s2.de)
    {
        if (s1.de<s2.de)
        {
            return false;
        }
        else if (s1.de==s2.de)
        {
            if (s1.id>s2.id)
            {
                return false;
            }
            else
                return true;
        }
        else
            return true;
    }
    else
        return true;
}
int main(){
    int n, l, h;
    scanf("%d%d%d", &n, &l, &h);
    stu s[n];
    int count1=0, count2=0,count3=0, count4 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].de >> s[i].cai;
        if (s[i].cai>=h&&s[i].de>=h)
        {
            s[i].grade = 1;
            count1++;
        }
        else if (s[i].cai<h&&s[i].de>=h&&s[i].cai>=l)
        {
            s[i].grade = 2;
            count2++;
        }
        else if (s[i].cai<h&&s[i].de<h&&s[i].cai>=l&&s[i].cai>=l&&s[i].de>=s[i].cai)
        {
            s[i].grade = 3;
            count3++;
        }
        else if (s[i].cai>=l&&s[i].de>=l)
        {
            s[i].grade = 4;
            count4++;
        }
        else{
            s[i].grade = 5;
        }
    }
    sort(s, s + n, cmp);
    sort(s, s + count1, cmp2);
    sort(s + count1, s + count1 + count2, cmp2);
    sort(s + count1 + count2, s + count1 + count2 + count3, cmp2);
    sort(s + count1 + count2 + count3, s + count1 + count2 + count3 + count4, cmp2);
    printf("%d\n", count1 + count2 + count3 + count4);
    for (int i = 0; i < count1 + count2 + count3 + count4; i++)
    {
        cout << s[i].id << " " << s[i].de << " " << s[i].cai << endl;
    }
    return 0;
}
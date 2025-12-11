#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_marks;
};

bool cmp(Student l, Student r) 
{
    int sum1 = l.math_mark + l.eng_marks;
    int sum2 = r.math_mark + r.eng_marks;
    if(sum1 != sum2)
    {
        return sum1 > sum2; 
    }
    return l.id < r.id;        
}

int main() 
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_marks;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_marks << endl;
    }
    return 0;
}


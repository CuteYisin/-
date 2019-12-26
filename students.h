#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    int ID,Age,Class;
    string Name,Gender,Major,Tel;
public:
    void Set(student *a,int len);
    void Name_Find(student *a,int len,string name);
    void ID_Find(student *a,int len,int nID);
    void Show(student *a,int len);
    void Change(student *a,int len,int m,int q,string s);
    void Delate(student *a,int len,int m);
    void Output(int *nID,string *name,string *gender,int *age,string *major,int *nclass,string *tel);
    void Input(int nID,string name,string gender,int age,string major,int nclass,string tel);

friend class course;
};

class course
{
private:
    int Num,Time,Term,People,Grades;
    string Name,Nature;
    vector<int> ID;
public:
    void Set(course *a,int len);
    void Name_Find(course *a,int len,string name);
    void Num_Find(course *a,int len,int num);
    void Show(course *a,int len);
    void Change(course *a,int len,int m,int q,string s);
    void Delate(course *a,int len,int m);
    void Choose(course *a,int len,int stuID,int num);
    void Statistics(course *a,int len,int nID,student *b,int len2);
    void Output(int *num,string *name,string *nature,int *time,int *grades,int *term,int *people);
    void Input(int num,string name,string nature,int time,int grades,int term,int people);
};

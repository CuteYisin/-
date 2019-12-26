#include <bits/stdc++.h>
#include "students.h"
using namespace std;
void goout();
student stu[1000];
course cou[1000];
int len1=0,len2=0;

int main()
{

    cout<<"＃〓§〓〓〓〓〓§〓〓〓〓〓〓§〓〓〓〓〓§〓＃"<<endl;
    cout<<"　　↓　　　　　↓　　　　　　↓　　　　　↓ "<<endl;
    cout<<"  ☆★☆　　　☆★☆　　　　☆★☆　　　☆★☆ "<<endl;
    cout<<"☆　选　☆　☆　课　☆　　☆　系　☆　☆　统　☆ "<<endl;
    cout<<"　☆★☆　　　☆★☆　　　　☆★☆　　　☆★☆ "<<endl;
    cout<<"　　↓　　　　　↓　　　　　　↓　　　　　↓ "<<endl;
    cout<<"　　※　　　 　 ※　　　　　　※　　　　　※ "<<endl;

    cout<<"************************************************"<<endl;
    cout<<"                     menu                       "<<endl;
    cout<<"************************************************"<<endl;
    cout<<"                  1-添加记录                    "<<endl;
    cout<<"                  2-查询信息                    "<<endl;
    cout<<"                  3-显示浏览                    "<<endl;
    cout<<"                  4-修改记录                    "<<endl;
    cout<<"                  5-删除记录                    "<<endl;
    cout<<"                  6-统计数据                    "<<endl;
    cout<<"                  7-保存记录                    "<<endl;
    cout<<"                  8-读取记录                    "<<endl;
    cout<<"                  9-选择课程                    "<<endl;
    cout<<"                  0-退出系统                    "<<endl;
    cout<<"************************************************"<<endl;
    cout<<"               请输入选项前数字                 "<<endl;

    cout<<" _____ | _____      "<<endl;
    cout<<"()____)+()____)     "<<endl;
    cout<<"()____)+()____)     ┬┴┬┌─　●─┬─　　│─┼─┐　●├─┤ ○"<<endl;
    cout<<"()____)+()____)     ┴┬┴├┬　 ┌─┼─　 │◎│ │　○└┬┘ ●"<<endl;
    cout<<"()____)+()____)     ─┼─││　 │ │　　││─┴─┴　 ──┼──"<<endl;
    cout<<"()____)+()____)    ●│○│　 ┴─┼─　　│○ ●  ／│ ＼"<<endl;
    cout<<"     / | \          "<<endl;
    cout<<endl;

    int n;
    int m,m1,nID,num,q,f;
    string name,s;
    cin>>n;
    while(n>9)
    {
        cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
        cin>>n;
    }
    switch(n)
    {
    case 0:
        goout();
        break;

    case 1:
        cout<<"请选择您要添加的类别:"<<endl;
        cout<<"1-学生信息录入   2-课程信息录入"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
            stu[len1++].Set(stu,len1);
        else if(m==2)
            cou[len2++].Set(cou,len2);
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 2:
        cout<<"请选择您要查询的类别:"<<endl;
        cout<<"1-学生信息查询   2-课程信息查询"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"请选择您查询的关键字:"<<endl;
            cout<<"1-学生学号查询   2-学生姓名查询"<<endl;
            cin>>m1;
            while(m1>2||m1<1)
            {
                cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
                cin>>m1;
            }
            if(m1==1)
            {
                cout<<"请输入学号"<<endl;
                cin>>nID;
                stu[0].ID_Find(stu,len1,nID);
            }
            else if(m1==2)
            {
                cout<<"请输入姓名"<<endl;
                cin>>name;
                stu[0].Name_Find(stu,len1,name);
            }
        }
        else if(m==2)
        {
            cout<<"请选择您查询的关键字:"<<endl;
            cout<<"1-课程代码查询   2-课程名称查询"<<endl;
            cin>>m1;
            while(m1>2||m1<1)
            {
                cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
                cin>>m1;
            }
            if(m1==1)
            {
                cout<<"请输入代码"<<endl;
                cin>>nID;
                cou[0].Num_Find(cou,len2,nID);
            }
            else if(m1==2)
            {
                cout<<"请输入名称"<<endl;
                cin>>name;
                cou[0].Name_Find(cou,len2,name);
            }
        }
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 3:
        cout<<"请选择您要显示的类别:"<<endl;
        cout<<"1-学生信息显示   2-课程信息显示"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
            stu[0].Show(stu,len1);
        else if(m==2)
            cou[0].Show(cou,len2);
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 4:
        cout<<"请选择您要编辑的类别:"<<endl;
        cout<<"1-学生信息编辑   2-课程信息编辑"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"请输入学生学号"<<endl;
            cin>>nID;
            cout<<"请选择要编辑的关键字"<<endl;
            cout<<"1-学号 2-姓名 3-性别 4-年龄 5-系别 6-班级 7-联系方式"<<endl;
            cin>>m1;
            cout<<"请输入"<<endl;
            cin>>s;
            stu[0].Change(stu,len1,nID,m1,s);
        }
        else if(m==2)
        {
            cout<<"请输入课程代码"<<endl;
            cin>>nID;
            cout<<"请选择要编辑的关键字"<<endl;
            cout<<"1-课程代码 2-课程名称 3-课程性质 4-总学时 5-学分 6-开课学期 7-选修人数"<<endl;
            cin>>m1;
            cout<<"请输入"<<endl;
            cin>>s;
            cou[0].Change(cou,len2,nID,m1,s);
        }
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 5:
        cout<<"请选择您要删除的类别:"<<endl;
        cout<<"1-学生信息删除   2-课程信息删除"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"请输入学生学号"<<endl;
            cin>>nID;
            stu[0].Delate(stu,len1,nID);
            len1--;
        }
        else if(m==2)
        {
            cout<<"请输入课程代码"<<endl;
            cin>>nID;
            cou[0].Delate(cou,len2,nID);
            len2--;
        }
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 6:
        cout<<"请选择您要统计的类别:"<<endl;
        cout<<"1-学生人数  2-课程门数  3-选修某门课程的学生的相关信息"<<endl;
        cin>>m;
        while(m>3||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"学生的总人数为 "<<len1<<endl;
        }
        else if(m==2)
        {
            cout<<"课程的总门数为 "<<len2<<endl;
        }
        else if(m==3)
        {
            cout<<"请输入课程代码"<<endl;
            cin>>nID;
            cou[0].Statistics(cou,len2,nID,stu,len1);
        }
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 7:
        cout<<"请选择您要保存的类别:"<<endl;
        cout<<"1-学生信息保存   2-课程信息保存"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            ofstream file ("student.output.txt");
            if(file.is_open())
            {
                int nID;string name;string gender;int age;string major;int nclass;string tel;
                for(int i=0;i<len1-1;i++)
                {
                    stu[i].Output(&nID,&name,&gender,&age,&major,&nclass,&tel);
                    file<<nID<<" "<<name<<" "<<gender<<" "<<age<<" "<<major<<" "<<nclass<<" "<<tel<<endl;
                }
                file.close();
            }
        }
        else if(m==2)
        {
            ofstream file ("course.output.txt");
            if(file.is_open())
            {
                int num,time,term,people,grades;
                string name,nature;
                for(int i=0;i<len2-1;i++)
                {
                    cou[i].Output(&num,&name,&nature,&time,&grades,&term,&people);
                    file<<num<<" "<<name<<" "<<nature<<" "<<time<<" "<<grades<<" "<<term<<" "<<people<<endl;
                }
                file.close();
            }
        }
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 8:
        cout<<"请选择您要读取的类别:"<<endl;
        cout<<"1-学生信息读取   2-课程信息读取"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            fstream file("student.input.txt");
            if(file.fail())
            {
                cout << "error open!" << endl;
            }
            while(!file.eof())
            {
                int nID;string name;string gender;int age;string major;int nclass;string tel;
                file>>nID>>name>>gender>>age>>major>>nclass>>tel;
                stu[len1++].Input(nID,name,gender,age,major,nclass,tel);
            }
        }
        else if(m==2)
        {
            fstream file1("course.input.txt");
            if(file1.fail())
            {
                cout << "error open!" << endl;
            }
            while(!file1.eof())
            {
                int num,time,term,people,grades;
                string name,nature;
                file1>>num>>name>>nature>>time>>grades>>term>>people;
                cou[len2++].Input(num,name,nature,time,grades,term,people);
            }
        }
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 9:
        cout<<"请输入您的学号以及您要选择的课程代码"<<endl;
        cin>>nID>>num;
        cou[0].Choose(cou,len2,nID,num);
        cout<<endl<<"1-返回主菜单  2-退出系统"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"输入错误(╥╯^╰╥)检查一下吧"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    }
    return 0;
}

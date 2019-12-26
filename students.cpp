#include<bits/stdc++.h>
#include "students.h"
using namespace std;

void student::Set(student *a,int len)
{
    int nID;string name;string gender;int age;string major;int nclass;string tel;
    cin>>nID>>name>>gender>>age>>major>>nclass>>tel;
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i].ID==nID)
        {
            x=1;
            break;
        }
    }
    if(x==1)
        cout<<"数据重复添加"<<endl;
    else
    {
        ID=nID;
        Name=name;
        Gender=gender;
        Age=age;
        Major=major;
        Class=nclass;
        Tel=tel;
    }
}

void student::Name_Find(student *a,int len,string name)
{
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i].Name==name)
        {
            cout<<"您查询的结果为:"<<endl;
            cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
            x=1;
            break;
        }
    }
    if(x==0)
        cout<<"未查询到结果 〃'▽'〃 请检查输入"<<endl;
}

void student::ID_Find(student *a,int len,int nID)
{
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i].ID==nID)
        {
            cout<<"您查询的结果为:"<<endl;
            cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
            x=1;
            break;
        }
    }
    if(x==0)
        cout<<"未查询到结果 〃'▽'〃 请检查输入"<<endl;
}

void student::Show(student *a,int len)
{
    for(int i=0;i<len-1;i++)
    {
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
    }
}

void student::Change(student *a,int len,int m,int q,string s)
{
    int num,i,x=0;
    stringstream ss;
    ss<<s;
    ss>>num;
    for(int j=0;j<len;j++)
    {
        if(a[j].ID==m)
        {
            i=j;
            break;
        }
    }
    switch(q)
    {
    case 1:
        for(int j=0;j<len;j++)
        {
            if(a[j].ID==num)
            {
                x=1;
                break;
            }
        }
        if(x==1)
            cout<<"数据重复添加"<<endl;
        else
        {
            a[i].ID=num;
            cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        }
        break;
    case 2:
        a[i].Name=s;
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        break;
    case 3:
        a[i].Gender=s;
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        break;
    case 4:
        a[i].Age=num;
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        break;
    case 5:
        a[i].Major=s;
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        break;
    case 6:
        a[i].Class=num;
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        break;
    case 7:
        a[i].Tel=s;
        cout<<a[i].ID<<" "<<a[i].Name<<" "<<a[i].Gender<<" "<<a[i].Age<<" "<<a[i].Major<<" "<<a[i].Class<<" "<<a[i].Tel<<endl;
        break;
    default:
        cout<<"输入有误"<<endl;
    }
}

void student::Delate(student *a,int len,int m)
{
    int n=-1;
    for(int i=0;i<len-1;i++)
    {
        if(a[i].ID==m)
        {
            n=i;
            break;
        }
    }
    if(n<0)
        cout<<"输入有误"<<endl;
    else
    {
        for(int i=n;i<len;i++)
        {
            a[i]=a[i+1];
        }
    }
}

void student::Output(int *nID,string *name,string *gender,int *age,string *major,int *nclass,string *tel)
{
    *nID=ID;
    *name=Name;
    *gender=Gender;
    *age=Age;
    *major=Major;
    *nclass=Class;
    *tel=Tel;
}

void student::Input(int nID,string name,string gender,int age,string major,int nclass,string tel)
{
    ID=nID;
    Name=name;
    Gender=gender;
    Age=age;
    Major=major;
    Class=nclass;
    Tel=tel;
}

void course::Set(course *a,int len)
{
    int num,time,term,people;
    double grades;
    string name,nature;
    cin>>num>>name>>nature>>time>>grades>>term>>people;
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i].Num==num)
        {
            x=1;
            break;
        }
    }
    if(x==1)
        cout<<"数据重复添加"<<endl;
    else
    {
        Num=num;
        Name=name;
        Nature=nature;
        Time=time;
        Grades=grades;
        Term=term;
        People=people;
    }
}

void course::Name_Find(course *a,int len,string name)
{
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i].Name==name)
        {
            cout<<"您查询的结果为:"<<endl;
            cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
            x=1;
            break;
        }
    }
    if(x==0)
        cout<<"未查询到结果 〃'▽'〃 请检查输入"<<endl;
}

void course::Num_Find(course *a,int len,int nID)
{
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(a[i].Num==nID)
        {
            cout<<"您查询的结果为:"<<endl;
            cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
            x=1;
            break;
        }
    }
    if(x==0)
        cout<<"未查询到结果 〃'▽'〃 请检查输入"<<endl;
}

void course::Show(course *a,int len)
{
    for(int i=0;i<len-1;i++)
    {
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
    }
}

void course::Change(course *a,int len,int m,int q,string s)
{
    int num,i,x=0;
    stringstream ss;
    ss<<s;
    ss>>num;
    for(int j=0;j<len;j++)
    {
        if(a[j].Num==m)
        {
            i=j;
            break;
        }
    }
    switch(q)
    {
    case 1:
        for(int j=0;j<len;j++)
        {
            if(a[j].Num==num)
            {
                x=1;
                break;
            }
        }
        if(x==1)
            cout<<"数据重复添加"<<endl;
        else
        {
            a[i].Num=num;
            cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        }
        break;
    case 2:
        a[i].Name=s;
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        break;
    case 3:
        a[i].Nature=s;
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        break;
    case 4:
        a[i].Time=num;
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        break;
    case 5:
        a[i].Grades=num;
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        break;
    case 6:
        a[i].Term=num;
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        break;
    case 7:
        a[i].People=num;
        cout<<a[i].Num<<" "<<a[i].Name<<" "<<a[i].Nature<<" "<<a[i].Time<<" "<<a[i].Grades<<" "<<a[i].Term<<" "<<a[i].People<<endl;
        break;
    default:
        cout<<"输入有误"<<endl;
    }
}

void course::Delate(course *a,int len,int m)
{
    int n=-1;
    for(int i=0;i<len;i++)
    {
        if(a[i].Num==m)
        {
            n=i;
            break;
        }
    }
    if(n<0)
        cout<<"输入有误"<<endl;
    else
    {
        for(int i=n;i<len-1;i++)
        {
            a[i]=a[i+1];
        }
    }
}

void course::Choose(course *a,int len,int stuID,int num)
{
    int n=-1;
    for(int i=0;i<len;i++)
    {
        if(a[i].Num==num)
        {
            n=i;
            break;
        }
    }
    if(n<0)
        cout<<"输入有误"<<endl;
    else
    {
        a[n].ID.insert(ID.begin(),stuID);
    }
}

void course::Statistics(course *a,int len,int nID,student *b,int len2)
{
    int n=-1;
    for(int i=0;i<len;i++)
    {
        if(a[i].Num==nID)
        {
            n=i;
            break;
        }
    }
    if(n<0)
        cout<<"输入有误"<<endl;
    else
    {
        for(int i=0;i<a[n].ID.size();i++)
        {
            for(int j=0;j<len2;j++)
            {
                if(b[j].ID==a[n].ID[i])
                {
                    cout<<b[j].ID<<" "<<b[j].Name<<" "<<b[j].Gender<<" "<<b[j].Age<<" "<<b[j].Major<<" "<<b[j].Class<<" "<<b[j].Tel<<endl;
                    break;
                }
            }
        }
    }
}

void course::Output(int *num,string *name,string *nature,int *time,int *grades,int *term,int *people)
{
    *num=Num;
    *name=Name;
    *nature=Nature;
    *time=Time;
    *grades=Grades;
    *term=Term;
    *people=People;
}

void course::Input(int num,string name,string nature,int time,int grades,int term,int people)
{
    Num=num;
    Name=name;
    Nature=nature;
    Time=time;
    Grades=grades;
    Term=term;
    People=people;
}

void goout()
{
    cout<<"        quu..__ "<<endl;
    cout<<"         $$$b  `---.__ "<<endl;
    cout<<"         \"$$b        `--.                          ___.---uuudP "<<endl;
    cout<<"           `$$b           `.__.------.__     __.---'      $$$$\"             .  "<<endl;
    cout<<"            \"$b          -'            `-.-'            $$$\"             .'| "<<endl;
    cout<<"              \".                                       d$\"            _.'  | "<<endl;
    cout<<"                 `.   /                              ...\"            .'     | "<<endl;
    cout<<"                   `./                           ..::-'            _.'       | "<<endl;
    cout<<"                    /                         .:::-'            .-'         .' "<<endl;
    cout<<"                   :                          ::''\          _.'            | "<<endl;
    cout<<"                  .' .-.             .-.           `.      .'               | "<<endl;
    cout<<"                  : /'$$|           .@\"$\           `.   .'              _.-' "<<endl;
    cout<<"                 .'|$u$$|          |$$,$$|           |  <            _.-' "<<endl;
    cout<<"                 | `:$$:'          :$$$$$:           `.  `.       .-' "<<endl;
    cout<<"                 :                  `\"--'             |    `-.     \ "<<endl;
    cout<<"                :##.       ==             .###.       `.      `.    `\ "<<endl;
    cout<<"                |##:                      :###:        |        >     > "<<endl;
    cout<<"                |#'     `..'`..'          `###'        x:      /     / "<<endl;
    cout<<"                 \                                   xXX|     /    ./ "<<endl;
    cout<<"                  \                                xXXX'|    /   ./ "<<endl;
    cout<<"                  /`-.                                  `.  /   / "<<endl;
    cout<<"                 :    `-  ...........,                   | /  .' "<<endl;
    cout<<"                 |         ``:::::::'       .            |<    `. "<<endl;
    cout<<"                 |             ```          |           x| \ `.:``. "<<endl;
    cout<<"                 |                         .'    /'   xXX|  `:`M`M':. "<<endl;
    cout<<"                 |    |                    ;    /:' xXXX'|  -'MMMMM:' "<<endl;
    cout<<"                 `.  .'                   :    /:'       |-'MMMM.-' "<<endl;
    cout<<"                  |  |                   .'   /'        .'MMM.-' "<<endl;
    cout<<"                  `'`'                   :  ,'          |MMM< "<<endl;
    cout<<"                    |                     `'            |tbap\ "<<endl;
    cout<<"                     \                                  :MM.-' "<<endl;
    cout<<"                      \                 |              .'' "<<endl;
    cout<<"                       \.               `.            / "<<endl;
    cout<<"                        /     .:::::::.. :           / "<<endl;
    cout<<"                       |     .:::::::::::`.         / "<<endl;
    cout<<"                       |   .:::------------\       / "<<endl;
    cout<<"                      /   .''               >::'  / "<<endl;
    cout<<"                      `',:                 :    .' "<<endl;
    cout<<"                                           `:.:'*/ "<<endl;
    cout<<"                          您已成功退出系统  "<<endl;

}

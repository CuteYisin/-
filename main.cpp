#include <bits/stdc++.h>
#include "students.h"
using namespace std;
void goout();
student stu[1000];
course cou[1000];
int len1=0,len2=0;

int main()
{

    cout<<"��������������������������������������������"<<endl;
    cout<<"�������������������������������������������� "<<endl;
    cout<<"  ��������������������������� "<<endl;
    cout<<"�ѡ�����Ρ�����ϵ����ͳ���� "<<endl;
    cout<<"����������������������������� "<<endl;
    cout<<"�������������������������������������������� "<<endl;
    cout<<"������������ �� ���������������������������� "<<endl;

    cout<<"************************************************"<<endl;
    cout<<"                     menu                       "<<endl;
    cout<<"************************************************"<<endl;
    cout<<"                  1-��Ӽ�¼                    "<<endl;
    cout<<"                  2-��ѯ��Ϣ                    "<<endl;
    cout<<"                  3-��ʾ���                    "<<endl;
    cout<<"                  4-�޸ļ�¼                    "<<endl;
    cout<<"                  5-ɾ����¼                    "<<endl;
    cout<<"                  6-ͳ������                    "<<endl;
    cout<<"                  7-�����¼                    "<<endl;
    cout<<"                  8-��ȡ��¼                    "<<endl;
    cout<<"                  9-ѡ��γ�                    "<<endl;
    cout<<"                  0-�˳�ϵͳ                    "<<endl;
    cout<<"************************************************"<<endl;
    cout<<"               ������ѡ��ǰ����                 "<<endl;

    cout<<" _____ | _____      "<<endl;
    cout<<"()____)+()____)     "<<endl;
    cout<<"()____)+()____)     �ЩةЩ������񩤩Щ����������੤����������� ��"<<endl;
    cout<<"()____)+()____)     �ةЩة��С� �����੤�� ���� �����𩸩Щ� ��"<<endl;
    cout<<"()____)+()____)     ���੤������ �� �������������ة��ء� �����੤��"<<endl;
    cout<<"()____)+()____)    �񩦡𩦡� �ة��੤�������� ��  ���� ��"<<endl;
    cout<<"     / | \          "<<endl;
    cout<<endl;

    int n;
    int m,m1,nID,num,q,f;
    string name,s;
    cin>>n;
    while(n>9)
    {
        cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
        cin>>n;
    }
    switch(n)
    {
    case 0:
        goout();
        break;

    case 1:
        cout<<"��ѡ����Ҫ��ӵ����:"<<endl;
        cout<<"1-ѧ����Ϣ¼��   2-�γ���Ϣ¼��"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>m;
        }
        if(m==1)
            stu[len1++].Set(stu,len1);
        else if(m==2)
            cou[len2++].Set(cou,len2);
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 2:
        cout<<"��ѡ����Ҫ��ѯ�����:"<<endl;
        cout<<"1-ѧ����Ϣ��ѯ   2-�γ���Ϣ��ѯ"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"��ѡ������ѯ�Ĺؼ���:"<<endl;
            cout<<"1-ѧ��ѧ�Ų�ѯ   2-ѧ��������ѯ"<<endl;
            cin>>m1;
            while(m1>2||m1<1)
            {
                cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
                cin>>m1;
            }
            if(m1==1)
            {
                cout<<"������ѧ��"<<endl;
                cin>>nID;
                stu[0].ID_Find(stu,len1,nID);
            }
            else if(m1==2)
            {
                cout<<"����������"<<endl;
                cin>>name;
                stu[0].Name_Find(stu,len1,name);
            }
        }
        else if(m==2)
        {
            cout<<"��ѡ������ѯ�Ĺؼ���:"<<endl;
            cout<<"1-�γ̴����ѯ   2-�γ����Ʋ�ѯ"<<endl;
            cin>>m1;
            while(m1>2||m1<1)
            {
                cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
                cin>>m1;
            }
            if(m1==1)
            {
                cout<<"���������"<<endl;
                cin>>nID;
                cou[0].Num_Find(cou,len2,nID);
            }
            else if(m1==2)
            {
                cout<<"����������"<<endl;
                cin>>name;
                cou[0].Name_Find(cou,len2,name);
            }
        }
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 3:
        cout<<"��ѡ����Ҫ��ʾ�����:"<<endl;
        cout<<"1-ѧ����Ϣ��ʾ   2-�γ���Ϣ��ʾ"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>m;
        }
        if(m==1)
            stu[0].Show(stu,len1);
        else if(m==2)
            cou[0].Show(cou,len2);
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 4:
        cout<<"��ѡ����Ҫ�༭�����:"<<endl;
        cout<<"1-ѧ����Ϣ�༭   2-�γ���Ϣ�༭"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"������ѧ��ѧ��"<<endl;
            cin>>nID;
            cout<<"��ѡ��Ҫ�༭�Ĺؼ���"<<endl;
            cout<<"1-ѧ�� 2-���� 3-�Ա� 4-���� 5-ϵ�� 6-�༶ 7-��ϵ��ʽ"<<endl;
            cin>>m1;
            cout<<"������"<<endl;
            cin>>s;
            stu[0].Change(stu,len1,nID,m1,s);
        }
        else if(m==2)
        {
            cout<<"������γ̴���"<<endl;
            cin>>nID;
            cout<<"��ѡ��Ҫ�༭�Ĺؼ���"<<endl;
            cout<<"1-�γ̴��� 2-�γ����� 3-�γ����� 4-��ѧʱ 5-ѧ�� 6-����ѧ�� 7-ѡ������"<<endl;
            cin>>m1;
            cout<<"������"<<endl;
            cin>>s;
            cou[0].Change(cou,len2,nID,m1,s);
        }
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 5:
        cout<<"��ѡ����Ҫɾ�������:"<<endl;
        cout<<"1-ѧ����Ϣɾ��   2-�γ���Ϣɾ��"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"������ѧ��ѧ��"<<endl;
            cin>>nID;
            stu[0].Delate(stu,len1,nID);
            len1--;
        }
        else if(m==2)
        {
            cout<<"������γ̴���"<<endl;
            cin>>nID;
            cou[0].Delate(cou,len2,nID);
            len2--;
        }
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 6:
        cout<<"��ѡ����Ҫͳ�Ƶ����:"<<endl;
        cout<<"1-ѧ������  2-�γ�����  3-ѡ��ĳ�ſγ̵�ѧ���������Ϣ"<<endl;
        cin>>m;
        while(m>3||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>m;
        }
        if(m==1)
        {
            cout<<"ѧ����������Ϊ "<<len1<<endl;
        }
        else if(m==2)
        {
            cout<<"�γ̵�������Ϊ "<<len2<<endl;
        }
        else if(m==3)
        {
            cout<<"������γ̴���"<<endl;
            cin>>nID;
            cou[0].Statistics(cou,len2,nID,stu,len1);
        }
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 7:
        cout<<"��ѡ����Ҫ��������:"<<endl;
        cout<<"1-ѧ����Ϣ����   2-�γ���Ϣ����"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
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
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 8:
        cout<<"��ѡ����Ҫ��ȡ�����:"<<endl;
        cout<<"1-ѧ����Ϣ��ȡ   2-�γ���Ϣ��ȡ"<<endl;
        cin>>m;
        while(m>2||m<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
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
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    case 9:
        cout<<"����������ѧ���Լ���Ҫѡ��Ŀγ̴���"<<endl;
        cin>>nID>>num;
        cou[0].Choose(cou,len2,nID,num);
        cout<<endl<<"1-�������˵�  2-�˳�ϵͳ"<<endl;
        cin>>f;
        while(f>2||f<1)
        {
            cout<<"�������(�i�s^�t�i)���һ�°�"<<endl;
            cin>>f;
        }
        if(f==1) main();
        else goout();
        break;

    }
    return 0;
}

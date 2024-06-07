#include<iostream>
using namespace std;


class a 
{
    int b;
    char c;
};
class Student
{
   private:
    string name , grade;
    int age , roll_no;

    //function getter and setter
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"Name can't be empty";
            return;
        }
        name = s;
    }
    void setage(int a)
    {
        if(age<0 || age>100)
        {
            cout<<"Invalid age";
            return;
        }
        age = a;
    }
    void setgrade(string g)
    {
        grade = g;
    }
    void setroll_no(int rn)
    {
        roll_no = rn;

    }

    void getname()
    {
        cout<<name;
    }

    int  getroll_no()
    {
        return roll_no;
    }
    string get_grade(int pin)
    {
        if(pin == 123)
        {
            return grade;
        }
        return " ";
    }

};
// void fun() 
// {
//     student 1
//     string name , grade;
//     int age , roll_no;

//     cin>>name>>age>>grade>>roll_no;
// }
int main()
{
    //function oriented 
    //student 1
    // string name , grade;
    // int age , roll_no;
    
    // cin>>name>>age>>grade>>roll_no;

    // //student 2
    // string name , grade;
    // int age , roll_no;
    
    // cin>>name>>age>>grade>>roll_no;

    // fun() 



    // //oops approach 
    // Student s1;
    // s1.name = "abc";
    // s1.age = 10;
    // s1.grade = "A";
    // s1.roll_no = 1;

    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;
    // cout<<s1.grade<<endl;
    // cout<<s1.roll_no<<endl;

    // Student s2;
    // s2.name = "xyz";
    // s2.age = 20;
    // s2.grade = "B";
    // s2.roll_no = 2; 

    // cout<<s2.name<<endl;    
    // cout<<s2.age<<endl;
    // cout<<s2.grade<<endl;
    // cout<<s2.roll_no<<endl;

    Student s3;
    s3.setname("Rohit");
    s3.setage(18);
    s3.setgrade("Abc");
    s3.setroll_no(121022);


    s3.getname();
    cout<<s3.getroll_no()<<endl;
    cout<<s3.get_grade(123)<<endl;

    //padding concept 
    a obj1;
    cout<<sizeof(a)<<endl;

    // static vs dynamic memory allocation
    Student *s = new Student;
    (*s).setname("Rohit");
    (*s).setage(18);
    (*s).setgrade("Abc");
    (*s).setroll_no(121022);

    s->getname();

    delete s;
    
}
#include<iostream>
using  namespace std;


class Student
{
    public:
    void studentprint()
    {
        cout<<"I am a student"<<endl;
    }
};

class Boy : public Student , public Male
{
    public:
    void boyprint()
    {
        cout<<"I am a boy"<<endl;
    }
};
class Girl: public Student , public Female
{
    public:
    void girlprint()
    {
        cout<<"I am a girl"<<endl;
    }

};

class Male
{
    public:
    void maleprint()
    {
        cout<<"I am a male"<<endl;
    }
};

class Female 
{
    public:
    void femaleprint()
    {
        cout<<"I am a female"<<endl;
    }
};
int main()
{
    Girl G1;
    G1.studentprint();
    G1.girlprint();
    G1.femaleprint();
    Boy B1;
    B1.studentprint();
    B1.maleprint();
    B1.boyprint();
    return 0;
}
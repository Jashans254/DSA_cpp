#include<iostream>
using namespace std;

class Complex 
{
    int real, img;

public:
    Complex() : real(0), img(0) {} // Initialize real and img to 0
    Complex(int real, int img)
    {
        this->real = real; 
        this->img = img;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }

    Complex operator +(const Complex &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}

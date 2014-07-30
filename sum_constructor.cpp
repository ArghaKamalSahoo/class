#include<iostream>
using namespace std;
class complex
{
float x,y;
public:
    complex(){ }
complex(float a,float b)
{
    x=a;
    y=b;
}
friend complex sum(complex,complex);
friend void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
void show(complex c)
{
    cout<<":the sum number is :"<<endl;
    cout<<c.x<<"+"<<c.y<<endl;
}
int main()
{
    complex c1,c2,c;
    c1=complex(4.5,5.4);
    c2=complex(5.3,4.9);
    c=sum(c1,c2);
    cout<<"c1=";show(c1);
    cout<<"c2=";show(c2);
    show(c);
    return 0;
}

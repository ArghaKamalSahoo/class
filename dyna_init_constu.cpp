#include<iostream>
using namespace std;
class fixed_deposit
{
    long int p_value;
    int year;
    float rate;
    float R;
public:
    fixed_deposit(){}
    fixed_deposit(long int p,int y,int r);
    fixed_deposit(long int p,int y,float r=0.12);
    void display(void);
};
fixed_deposit::fixed_deposit(long int p,int y,int r )
{
    int i;
    p_value=p;
    year=y;
    rate=r;
    R=p_value;
    for(i=0;i<=y;i++)
    {
        R=R*(1.0+float(r)/100);
    }
}
fixed_deposit::fixed_deposit(long int p,int y,float r)
{
     int i;
    p_value=p;
    year=y;
    rate=r;
    R=p_value;
    for(i=0;i<=y;i++)
    {
        R=R*(1.0+r);
    }
}
void fixed_deposit::display(void)
{
    cout<<"princilple amount="<<p_value<<endl;
    cout<<"return value="<<R<<endl;
}
int main()
{
    fixed_deposit f1,f2,f3;
    long  int p;
    int y;
    int r;
    float R;
    cout<<"enter the principle amount,year,interest in percentage"<<endl;
    cin>>p>>y>>r;
    f1=fixed_deposit(p,y,r);
    cout<<"enter the principle amount,year,interest in decimal"<<endl;
    cin>>p>>y>>R;
    f2=fixed_deposit(p,y,R);
    cout<<"enter the principle amount,year"<<endl;
    cin>>p>>y;
    f3=fixed_deposit(p,y);
    cout<<"deposit 1"<<endl;
    f1.display();
    cout<<"deposit 2"<<endl;
    f2.display();
    cout<<"deposit 3"<<"\n";
    f3.display();
    return 0;
}

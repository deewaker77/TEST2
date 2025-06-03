#include<iostream>
using namespace std;
class abc
{
private:
float si,p,r,t;
public:
void get()
{
cin>>p>>r>>t;
}

void cal()
{
si=p*r*t/100;
}

void put()
{
cout<<si;
}
};
main()
{
abc a1,a2,a3;
a1.get();
a1.cal();
a1.put();
a2.get();
a2.cal();
a2.put();
a3.get();
a3.cal();
a3.put();
}
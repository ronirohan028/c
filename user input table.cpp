#include<iostream>
using namespace std;
class table
{
int i;
int r;
int num;
public:
table()
{
cout<<"ENTER THE NUMBER::"<<endl;
cin>>num;
}
void show()
{
for(i=1;i<=10;++i)
{
r=num*i;
cout<<num<<"*"<<i<<"="<<r<<endl;
}
}
};
int main()
{
table rr;
rr.show();
return 0;
}
#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
  *x=*x+*y;
  *y=*x-*y;
  *x=*x-*y;
  cout<<"\n inside function swap a="<<x<<"\t b="<<y;
}
int main()
{
    int a;
    int b;
    cout<<"\n enter the no a:";
    cin>>a;
    cout<<"\n enter the no b:";
    cin>>b;
    cout<<"\n before swap a="<<a<<"\t  b="<<b;
    swap(&a,&b);
    cout<<"\n after swap a="<<a<<"\t  b="<<b;
    return 0;
}
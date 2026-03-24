#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    public:
    A()
    {
        cout<<"default"<<endl;
        a=0;
        b=0;
    }
    A(int a, int b)
    {
        this->a=a;this->b=b;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    
      
    
};
int main()
{
    A obj1,obj2(10,20);
    obj1.display();
    obj2.display();
    return 0;
}

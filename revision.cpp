//#include<iostream>
//using namespace std;


//recursion

/*int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
int a;
cout<<"enter a:";
cin>>a;
cout<<"factorial of a is:"<<factorial(a);
return 0;
}*/


/*int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1); 
}   
int main ()
{
    int a;
    cout<<"Enter the number a:";
    cin>>a;
    cout<<"The fibunachi series is :"<<fib(a);
    return 0;
}*/


// overloading of function

/*int volume(int a)
{
    return (a*a*a);
}

float volume(float r , float h)
{
    return (3.14*r*r*h);
}

int main()
{
    int x;
    int b;
    int c;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of r and h:";
    cin>>b>>c;
    cout<<"the volume of cube is:"<<volume(x)<<endl;
    cout<<"the volume of cylender is :"<<volume(b,c);
    return 0;
}*/

// class

/*class employee
{
    private : 
    int a, b, c;

    public:
    int d, e;
    
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
        cout<<"the value of c is:"<<c<<endl;
        cout<<"the value of d is:"<<d<<endl;
        cout<<"the value of e is:"<<e<<endl;
    }
};
void employee :: setData(int a1, int b1, int c1)
{
   a=a1;
   b=b1;
   c=c1;
}
int main()
{
    employee aarav;
    aarav.d=4;
    aarav.e=5;
    aarav.setData(1,2,3);
    aarav.getData();
    return 0;
}*/

/*#include <iostream>
using namespace std;
class BankAccount
{
    private:
    string accountHolderName;
    int accountNumber;
    double balence;

    public:
    BankAccount();
    BankAccount(string name, int number, double b);
    void displayDetails();
    void deposit(double amount);
    void widthraw(double amount);
};

BankAccount :: BankAccount(string name, int number, double b)
{
    accountHolderName = name;
    accountNumber = number;
    balence = b;
}
BankAccount :: bankAccount()
{
   accountHolderName=s;
   accountNumber = 
}*/
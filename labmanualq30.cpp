#include<iostream>
using namespace std;
int main()
{
    float s[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the salery of the person"<<i+1<<":";
        cin>>s[i];
    }
    float total=s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6]+s[7]+s[8]+s[9];
    float avg=total/10;
    cout<<"Total salery is :"<<total<<endl;
    cout<<"Average salery is :"<<avg<<endl;
    return 0;
    
}
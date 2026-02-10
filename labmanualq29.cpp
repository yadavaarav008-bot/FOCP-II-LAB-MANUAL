#include<iostream>
using namespace std;
int main()
{
    float temp[30];
    float min ;
    for (int i = 0; i < 30; i++)
    {
        cout<<"Enter the temperature for day"<<i+1<<":";
        cin>>temp[i];
    }
    min=temp[0];
    for (int i =1; i < 30; i++)
    {
        if (temp[i]<min)
        {
            min=temp[i];
        }
    }
    cout<<"Minimum temperature is:"<<min<<endl;
    return 0;
    
}
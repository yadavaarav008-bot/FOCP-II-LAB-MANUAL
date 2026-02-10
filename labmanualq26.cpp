#include<iostream>
using namespace std;
int main()
{
    float s[5];
    for ( int i = 0; i < 5; i++)
    {
        cout<<"Enter marks of subject "<<i+1<<":";
        cin>>s[i];
    }
    float total=s[0]+s[1]+s[2]+s[3]+s[4];
    float percentage=(total/500)*100;
    cout<<"total marks:"<<total<<endl;
    cout<<"percentage:"<<percentage<<endl;
    return 0;

}
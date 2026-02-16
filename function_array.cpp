#include<iostream>
using namespace std;
void computePerfomance(int m[],int n)
{
    int i;
    int min=m[0] , max=m[0] , avg=m[0];
    for (int i = 1; i < n; i++)
    {
        if (max < m[i])
        {
            max = m[i];
        }

        if (min > m[i])
        {
            min = m[i];
        }
        avg+=m[i];
    }
     cout<<"\n average is :"<<avg/n;
     cout<<"\n minimum is :"<<min;
     cout<<"\n maximum is :"<<max;
     
}
int main()
{
    int marks[10]={45,36,23,75,80,76,90,99,12,34};
    computePerfomance(marks,10);
    return 0;
}
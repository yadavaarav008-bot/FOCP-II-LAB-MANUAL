#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    void inputDetails();
    int calculateTotal();
    void displayDetails();
    student();
    student(int ,string);
    student(int,string,int,int,int);
};
 void student:: inputDetails()
 {
    cout<<"Enter your roll nnmber, name, mark1, mark2, mark3 "<<endl;
    cin>>rollNo>>name>>marks1>>marks2>>marks3;
 }
 int student::calculateTotal()
 {
    return marks1+marks2+marks3;
 }
 void student::displayDetails()
 {
    cout<<"roll no is :"<<rollNo<<endl;
    cout<<"name is : "<<name<<endl;
    cout<<"total :"<<calculateTotal()<<endl;
 }
 student::student()
 {
    rollNo=0;name=aarav;marks1=15;marks2=20;marks
 }
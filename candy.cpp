#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string c, int p);
    void displayCandy();
};
void Candy::setCandy(string c, int p)
{
    color=c;points=p;
}
void Candy::displayCandy()
{
    cout<<"\n color of the candy : "<<color;
    cout<<"\n your points are :"<<points;
}
int main()
{
    Candy c1, c2;
    c1.setCandy("Blue", 28);
    c1.displayCandy();
    c2.setCandy("Black", 23);
    c1.displayCandy();
    return 0;
}
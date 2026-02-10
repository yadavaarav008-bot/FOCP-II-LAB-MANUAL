#include <iostream>
using namespace std;
void welcome(string="user");
int main(){

welcome();
welcome("section b");

}

void welcome(string name){
    cout<<"\n welcome "<<name;
}
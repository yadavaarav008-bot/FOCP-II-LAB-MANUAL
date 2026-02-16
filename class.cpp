#include<iostream>
using namespace std;
class car
    {
        string brand;
        int make_year;
        string color;
        public: //make the car info accessible to puclic but by defailt all the functions are private
        string car_type;
        void display()
        {
            cout<<"\n Brand of the car"<<brand;
            cout<<"\n Make year of the car"<<make_year;
            cout<<"\n Car type"<<car_type;
        }
        void car_entry()
        {
            cout<<"\n Enter brand , make , car , type , colour";
            cin>>brand>>make_year>>car_type>>color;
        }
    };
    int main()
    {
        car c1;
        c1.car_entry();
        c1.car_type="Hatchback";
        c1.display();


        return 0;
    }

#include<iostream>
using namespace std;
class Car {
    public:
    string brand;   
    string model;
    int year;
    string colour;
    float speed;
};
int main() {
  Car car1;
  car1.brand = "MG";
  car1.model = "X5";
  car1.year = 1999;
  car1.colour="navy blue";
  car1.speed=40.00;

  Car car2;
  car2.brand = "Ford";
  car2.model = "Mustang";
  car2.year = 1969;
  car2.colour="black&silver";
  car2.speed=32.00;

  cout << car1.brand << "\t " << car1.model << "\t " << car1.year<<"\t" << car1.colour << "\t " << car1.speed << "\n";
  cout<<car2.brand<<"\t"<<car2.model<<"\t"<<car2.year<<"\t"<<car2.colour<<"\t "<< car2.speed << "\n";
  return 0;
}

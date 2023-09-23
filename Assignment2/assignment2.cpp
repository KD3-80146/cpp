#include<iostream>
using namespace std;


class address{
    string building;
    string street;
    string city;
    int pin;
  public:
 address()
 {
 }
address(string building,string street,string city,int pin)
  {
   this->building=building;
   this->street=street;
    this->city=city;
   this->pin=pin;
  }
void accept()
  {    cout<<"Enter The Building Name =";
    cin>>building;
    cout<<"Enter the Street Name =";
    cin>>street;
    cout<<"Enter the City Name =";
    cin>>city;
    cout<<"Enter The Pincode =";
    cin>>pin;

  }

void display()
  {
    cout<<"***********************************"<<endl;
    cout<<"building name ="<<this->building<<endl;
   cout<<"street ="<<this->street<<endl;
   cout<<"city ="<<this->city<<endl;
   cout<<"pincode ="<<this->pin<<endl;
   cout<<"*********************************"<<endl;
  }
 string get_building(){
    return this->building;
  }
string get_street()
 {
    return this->street;
 }
string get_city()
 {
    return this->city;

 }
int get_pin()
 {
      return this->pin;
 }
void set_building(string building)
  {
    this->building=building;
  }
void set_street(string street)
 {
    this->street=street;
 }
void set_city(string city)
 {
    this->city=city;
 }
void set_pin(int pin)
 {
    this->pin=pin;
 
 }

};


int main()
{
    address t;
    
    address k("krishna","mirgunj","arrah",802301);
    k.display();

     address c;
     c.set_building("Mannat");
     c.set_city("Mumbai");
     c.set_street("Bandra");
     c.set_pin(10020);
     c.display(); 

      address a;
      a.accept();
      cout<<a.get_building()<<endl;
      cout<<a.get_street()<<endl;
      cout<<a.get_city()<<endl;
      cout<<a.get_pin()<<endl;


     address d;
    d.accept();
    d.display();



    return 0;
    
}
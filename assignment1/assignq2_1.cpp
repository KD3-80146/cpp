#include<iostream>
using namespace std;
class date{

   int day;
   int month;
   int year;
   public:
   void initDate()
   {
      this->day=01;
      this->month=01;
      this->year=2023;
   }
   void acceptDateFromConsole()
   {
    cout<<"Enter The Date"<<endl;
    cin>> this->day>> this->month>>this->year;
   }
   void printDateOnConsole()
   {
     cout<<this->day<<"-"<<this->month<<"-"<<this->year;

   }
   bool isLeapYear()
   {
      if(this->year%400==0)
      {
        return true;
      }
      else if(this->year%100==0)
      {
        return false;
      }
      else if(this->year%4==0)
      {
         return true;
      }
      else{
        return false;
      }
   }
};
int main()
{
    date t;
    int a;
     bool x=false;
     cout<<"1.INITIAL"<<endl;
        cout<<"2.Print"<<endl;
        cout<<"3.Accept"<<endl;
        cout<<"4.IS LEAPYEAR"<<endl;
       

     cout<<"Enter The Choice =";
     cin>>a;

    do{
        
     switch(a)
     {
        case 1:
            t.initDate();
            break;
        case 2:
           t.printDateOnConsole();
           break;
        case 3:
           t.acceptDateFromConsole();
           break;
        case 4:
            x=t.isLeapYear();
             if(x==0)
             {
                cout<<"NOT A LEAP YEAR"<<endl;
             }
             else{
                cout<<"Leap year"<<endl;
             }
           break;
           default:
           cout<<"choice valid index";
     }
    cout<<"Press 0 to exit";
    cin>>a;
    }while(a!=0);

}
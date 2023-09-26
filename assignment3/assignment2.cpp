#include<iostream>
using namespace std;

class tollbooth{
   private:
   float money;
   int count;
   public:
   tollbooth(){
    this->money=0;
    this->count=0;
   }
  void payingcar(int &x)
   {
      x++;
    
     this->count++;
     this->money=money + 7.81;
    
     

   }
   void nopayingcar(int &y)

   {
    y++;
    this->count++;
    
   }
   void printOnConsole(int &x,int &y)

   {
     
     cout<<"total no of nonpaying car ="<<x<<endl;
     cout<<"total no of paying car ="<<y<<endl;
     cout<<"Total no of cars ="<<this->count<<endl;
     cout<<"Total no of money ="<<this->money<<endl;
   }

  

};
 int menu(){
    int choice;
    cout<<"************************"<<endl;
    cout<<"0.EXIT PRESS 0"<<endl;
    cout<<"1.Enter The Paying car"<<endl;
    cout<<"2.Enter THE NonPaying car"<<endl;
    cout<<"3.Display The result "<<endl;
    cout<<"**************************"<<endl;
    
    cin>>choice;
    return choice;
}

int main()
{
    tollbooth T;
    int totalnon=0;
    int totalpay=0;
    // T.nopayingcar();
    // T.payingcar();
    // T.printOnConsole();
    int choice;
    while(choice=menu())
    {
        switch (choice)
        {
        case 1:
          T.payingcar(totalpay);
         
          cout<<"You Enter for paying car  "<<endl;
            break;
        case 2:
        T.nopayingcar(totalnon);
        
        cout<<"you Enter for non Paying car"<<endl;
            break;
        case 3:
        T.printOnConsole(totalnon,totalpay);
            break;
        default:
        cout<<"Please enter valid number"<<endl;
            break;
        }
    }
}
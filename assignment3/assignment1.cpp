#include<iostream>
using namespace std;

class box{
    private:
    float length;
    float width;
    float hight;

    public:

    box(){
        this->length=0;
        this->width=0;
        this->hight=0;
    
    }
    void accept()
    {
        cout<<"Enter The length =";
        cin>>this->length;
        cout<<"Enter the width  =";
        cin>>this->width;
        cout<<"Enter the Hight =";
        cin>>this->hight;
    }

     float  volume()
    {
        int z=this->length*this->width*this->hight;
        return z;
    }
     
    void display()
    {
        cout<<"The volume for Length = "<<this-> length <<" width = "<<this-> width <<" Hight = "<<this-> hight << " is "<<volume()<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"*****************"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. Add length,width,hight"<<endl;
    cout<<"2. Disply volume"<<endl;

    cout<<"*****************"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
  box a;
  int choice;
  while(choice=(menu()))
  {
    switch (choice)
    {
    case 1:
       a.accept();
        break;
    case 2:
    a.display();
    break;
    
    default:
       cout<<" wrong choice entered"<<endl;
        break;
    }
  }
  cout<<"Thnaks for using "<<endl;
 

}
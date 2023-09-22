#include<iostream>
using namespace std;
 class student{
    int rollno;
    string name;
    int marks;
    public:
    void initStudent()
    {
        rollno=01;
        name="Rahul";
        marks=100;
    }
   void printStudentOnConsole()
   {
      cout<<"Rollno ="<<rollno<<endl;
      cout<<"Name ="<<name<<endl;
      cout<<"Marks ="<<marks<<endl;


   }
  void acceptStudentFromConsole()
  {
    cout<<"Enter Student detail rollno,name ,marks"<<rollno<<name<<marks;
  }
   

 };

 int main()
{
    student t;
    int a;
     bool x=false;
     cout<<"1.INITIAL"<<endl;
        cout<<"2.Print"<<endl;
        cout<<"3.Accept"<<endl;
     
       

     cout<<"Enter The Choice =";
     cin>>a;

    do{
        
     switch(a)
     {
        case 1:
            t.initStudent();
            break;
        case 2:
           t.printStudentOnConsole();
           break;
        case 3:
           t.acceptStudentFromConsole();
           break;
           default:
           cout<<"choice valid index";
     }
    cout<<" press any key to see values or Press 0 to exit";
    cin>>a;
    }while(a!=0);

}
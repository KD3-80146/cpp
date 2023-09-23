#include<iostream>
using namespace std;
 namespace NStudent{
 class student{
    int rollno;
    string name;
    int marks;
    public:
    void initStudent()
    {
        this->rollno=01;
        this->name="Rahul";
        this->marks=100;
    }
   void printStudentOnConsole()
   {
      cout<<"Rollno ="<<this->rollno<<endl;
      cout<<"Name ="<<this->name<<endl;
      cout<<"Marks ="<<this->marks<<endl;


   }
  void acceptStudentFromConsole()
  {
    cout<<"Enter Student detail rollno,name ,marks"<<this->rollno<<this->name<<this->marks;
  }
   

 };
}
 int main()
{
   NStudent::student t;
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
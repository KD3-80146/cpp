#include<iostream>
using namespace std;
class stack{
  int top;
  int size;
  int *arr;
  public:

  stack(int size)
  {
     this->top=-1;
    if(size>0)
    {
      this->size=size;
      this->arr=new int[size];
      
    }
    else
    {
      
      this->arr=new int[5];
      this->size=5;
    }
  }
  void push(int enter)
  {
     if(this->top==this->size-1)
     {
      cout<<"stack is FULL";
     }
      else
      {
        
        top++;
        arr[top]=enter;
        
        
      }
     
  }
  void pop()  
  {
     if(top==-1)
     cout<<"stack is empty"<<endl;
     else
     {
      top--;
     }
  }
  void peek()
  {
      if(top==-1)
      {
        cout<<"stack is empty"<<endl;
        
      }
      else
      {
        cout<<"The value of top is "<<this->arr[top]<<endl;
      }
  }
  void isempty()
  {
    if(top==-1)
    {
      cout<<"Stack Is Empty"<<endl;
    }
    else
    {
      cout<<"you can insert the values"<<endl;
    }

  }
  void isfull()
  {
      if(top==size-1)
     {
      cout<<"stack is FULL";
     }
     else
     {
      cout<<"stack is not full please insert a value"<<endl;
     }
  }
  void displaystak()
  {
    for(int i=0;i<=top;i++)
    {
      cout<<arr[i]<<endl;
    }

  }
};
int main()
{ int sign;
  cin>>sign;
  stack t(sign);
 
  t.push(2);
   t.push(4);
  t.displaystak();
  //t.pop();
  t.peek();

};
    

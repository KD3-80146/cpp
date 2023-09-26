#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
void initDate(struct date* ptrDate){
      ptrDate->day=01;
     ptrDate->month=01;
     ptrDate->year=2023;


};
void acceptDateFromConsole(struct date *ptrDate)
{
    printf("ENTER values = ");
    scanf("%d-%d-%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
    
};
void printDateOnConsole(struct date* ptrDate){
    printf("%d-%d-%d",ptrDate->day,ptrDate->month,ptrDate->year);
};
int main()
{ struct date t;
  int n;
  
    printf("1.INITIAL DATE \n");
    printf("2 USER INPUT DATE \n");
    printf("3 PRINT DATE\n");
    
    printf("enter the choice");
    scanf("%d",&n);
   

   do 
   {
   
        switch(n)
        {
            case 1:
                initDate(&t);
                break;
            case 2:
                acceptDateFromConsole(&t);
                break;
            case 3:
                printDateOnConsole(&t);
                break;
            default:
                break;

        }
    printf("Press 0 to exit and non-zero to exit!");
    scanf("%d",&n);
   
   }while (n!=0);
   
}
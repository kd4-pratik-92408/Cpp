// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members
// day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

#include<stdio.h>

struct Date1 {
  int day;
  int month;
  int year;
 
};

class Date{
  public:
  int day;
  int month;
  int year;

    void initDate(){
      day = 0;
      month = 0;
      year = 0;
  }

    void printDateOnConsole(){

      printf(" %d / %d / %d \n",day, month, year);

  }
    void acceptDateFromConsole(){
    printf("Enter Day As Your Wish : \n");
    scanf("%d",&day);
    printf("Enter Month As Your Wish : \n");
    scanf("%d",&month);
    printf("Enter Year As Your Wish : \n");
    scanf("%d",&year);   
    
  }
     
    bool isLeap(){
        if((year%4==0 and year%100!=0) or year%400==0){
          return true;
        }else return false;
    }
  
};

 
   void initDate(struct Date1* ptrDate){
      ptrDate -> day = 0;
      ptrDate -> month = 0;
      ptrDate -> year = 0;
   }
   
   void printDateOnConsole(struct Date1 *ptrDate){

      printf(" %d / %d / %d \n",ptrDate->day, ptrDate->month, ptrDate->year);

   }

   void acceptDateFromConsole(struct Date1* ptrDate){
      printf("Enter Day As Your Wish : \n");
      scanf("%d",&ptrDate->day);
      printf("Enter Month As Your Wish : \n");
      scanf("%d",&ptrDate->month);
      printf("Enter Year As Your Wish : \n");
      scanf("%d",&ptrDate->year);   
    
  }
    bool isLeap(struct Date1* ptrDate){
      if((ptrDate->year%4==0 and ptrDate->year%100!=0) or ptrDate->year%400==0){
        return true;
      }else return false;
    }

    int outerMenu(){
    int choice;
    printf("0. Exit \n");
    printf("1. Using Structure \n");
    printf("2. Using Class \n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    return choice;

  }

  int menu(){
    int choice;
    printf("0. Exit \n");
    printf("1. Initialize Record\n");
    printf("2. Accept Record\n");
    printf("3. Print Record \n");
    printf("4. Is Leap Year\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    return choice;

  }

int main(){

  struct Date1 date1 ;
  Date date;
  int choice;
  while((choice=outerMenu())!=0){

    switch (choice)
    {
    case 1:{

      int choice1 ;
      while((choice1 = menu())!=0){
        switch (choice1)
      {
      case 1:
        initDate(&date1);
        break;

      case 2:
        acceptDateFromConsole(&date1);
        break;

      case 3:
        printDateOnConsole(&date1);
        break;

      case 4:

        if(isLeap(&date1)){
          printDateOnConsole(&date1);
          printf("IS A LEAP YEAR\n");
        }else{
          printDateOnConsole(&date1);
          printf("IS NOT A LEAP YEAR\n");
        }
        break;
    
      default:
        printf("Enter Valid Choice .............\n");
        break;
      }
      }
      
      break;
    }

    case 2:{
      int choice2;
      while((choice2 = menu())!=0){
         switch (choice2)
      {
      case 1:
        date.initDate();
        break;
        
      case 2:
        date.acceptDateFromConsole();
        break;

      case 3:
        date.printDateOnConsole();
        break;

      case 4:

        if(date.isLeap()){
          date.printDateOnConsole();
          printf("IS A LEAP YEAR\n");
        }else{
          date.printDateOnConsole();
          printf("IS NOT A LEAP YEAR\n");
        }
        break;

      default:
        printf("Enter Valid Choice .............\n");
        break;
       }
      }
     
      break;
    }
    default:
    printf("Enter Valid Choice .............\n");
    break;
    
    }
  }

   return 0;
}

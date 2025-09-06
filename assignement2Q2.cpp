
// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying. 
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
// collected. Model this tollbooth with a class called tollbooth. 
// The two data items are a type unsigned int to hold the total number of cars, and a type double to 
// hold the total amount of money collected. 
// A constructor initializes all data members to 0.
//  A member function called payingCar() increments the car total and adds 0.50 to the cash total.
//   An other function, called nopayCar() 
// increments the car total but adds nothing to the cash total. Finally, a member function called 
// printOnConsole() displays the two totals and number of paying as well as non paying cars total. 
#include<iostream>
using namespace std;



class tollbooth{
    private:
    int no_of_cars;
    int car_who_pay;
    int car_who_notpay;
    double money_collected;


    public:
    tollbooth(){
        this->no_of_cars=0;
        this->car_who_pay=0;
        this->car_who_notpay=0;
        this->money_collected=0; 

    }

    void payingCar(){
        this->no_of_cars = no_of_cars + 1;
        this->money_collected=money_collected + 0.50;
        this->car_who_pay = car_who_pay + 1;
    }

    void notPayingCar(){
        this->no_of_cars = no_of_cars + 1;
        this->car_who_notpay = car_who_notpay + 1;
    }

    void display(void){
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Total no of cars passing is : "<<no_of_cars<<endl;
        cout<<"Total amount genrated ::"<<money_collected<<endl;
        cout<<"total no of cars who pay::"<<car_who_pay<<endl;
        cout<<"total no of cars who NOT  pay::"<<car_who_notpay<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;

    }


};


int main(){

    tollbooth t1;

    bool tt = true;

    while(tt){

        int switch1;

        cout<<"enter you choice :"<<endl;
        cout<<"1. enter 1 for every car go with payment "<<endl;
        cout<<"2. enter 2 for every car go without payment "<<endl;
        cout<<"3. enter 3 for to see the all data : "<<endl;
        cout<<"4. tner 4 for exit :"<<endl;
        
        cin>>switch1;

        switch(switch1){

            case 1 :
            t1.payingCar();
            break;

            case 2:
            t1.notPayingCar();
            break;

            case 3:
            t1.display();
            break;

            case 4 :
            tt = false;

            default :
            cout<<"Enter valid input "<<endl;
        }

    }
    return 0;

}


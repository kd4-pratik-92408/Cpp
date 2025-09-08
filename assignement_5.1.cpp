// Q1. Create a class Date with data memebrs day,month and year. 
// Cretae a class Person with data members name,address and birthdate. The birthdate should be of 
// type Date. 
// Create a class Student with data members id, marks, course and joining date, end date. The joining 
// date and end date should be of type date. 
// Implement above classes. Test all functionalities in main(). 
// (Note - Only Perform the Association in the above case. No need of Inheritance) 

#include<iostream>

using namespace std;


class Date1{
    private :
    int day ;
    int month ; 
    int year  ;


    public:

    Date1(void):day(0) , month(0) , year(0){

    }

    Date1(int day , int month , int year ):day(day) , month(month) , year(year) {

    }
    void accept_record(){
        cout<<"enter Day : ";
        cin>>day;
        cout<<"enter  month : ";
        cin>>month;
        cout<<"enter year";
        cin>>year;
    }

    void print_record(){
        cout<<day<<"-"<<month<<"-"<<year<<"-"<<endl;
    }

};


class person{
    private :
    string name ;
    string address;
    Date1 DOB;

    public:

    person():name(""), address("")  , DOB(){
    }
    person(string name , string address ):name(name) , address(address) {
        this->DOB = DOB;

    }
    person(string name , string address , int day ,int month , int year ):name(name) , address(address) , DOB(day , month , year)  {
        

    }
    void accept_record(){
        cout<<"enter name   :";
        cin>>name;
        cout<<"enter address    :";
        cin>>address;
        cout<<"  Enter the Date Of Birth   : "<<endl;
        this->DOB.accept_record();
    }

    void print_record(){
        cout<<"name  :  "<<name<<endl;
        cout<<"address  :   "<<address<<endl;
        cout<<"Date of Birth of the person is : ";
        this->DOB.print_record();

    }



};

class student{
    private:
    int id;
    int marks;
    string course;
    Date1 joining_date;
    Date1 end_date;


    public:
    

};




int main(){

    person p1;

    p1.accept_record();
    p1.print_record();
    // Date1 d1;
    // d1.accept_record();
    // d1.print_record();


    return 0;
}
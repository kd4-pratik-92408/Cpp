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


class student{

    private:

    int id;
    int marks;
    string course;
    Date1 joining_date;
    Date1 end_date;


    public:
    student():id(0) , marks(0) , course("") {

    }

    student(int id , int marks , string course  , Date1 joining_date , Date1 end_date )
    :  id(id) , marks(marks) , course(course)  , joining_date(joining_date) , end_date(end_date)
     {

    }

    void print_record(){

        cout<<"id :"<<id<<endl;
        cout<<"marks : "<<marks<<endl;
        cout<<"course : "<<course<<endl;
        cout<<"  joining Date  ";
        joining_date.print_record();
        cout<<"  End Date :   ";
        end_date.print_record();

    }

};






int main(){

    Date1 d1(10, 12 , 2003 );
    Date1 d2( 30 , 12 , 2103);
    student s1(1 , 55 , "DAC" , d1 , d2  );
    s1.print_record();

    


    return 0;
}
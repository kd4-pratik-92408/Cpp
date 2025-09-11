#include<iostream>
using namespace std;

class Employee{
    protected:
    int id;
    double salary;

    public:
    Employee():id(0) , salary(0){
    }
    Employee(int id , double salary):id(id),salary(salary){

    }
    void setid(int id){
        this->id = id;
    }
    int getid(){
        return this->id;
    }

    void set_salary(double salary){
        this->salary= salary;
    }

    double get_salary(){
        return this->salary;
    }

    virtual void accept(){
        cout<<"Enter the id :";
        cin>>id;
        cout<<"Enter the salary";
        cin>>salary;

    }
    virtual void display(){
        cout<<"id is : "<<id<<endl;
        cout<<"salary is : "<<salary<<endl;
    }

};


class Manager:virtual  Employee{

    protected:
    double bonus;

    public:
    Manager():Employee(),bonus(0){

    }
    Manager(int id , double salary , double bonus ):Employee(id, salary), bonus(bonus){

    }
    void setBonus(double bonus){
        this->bonus = bonus;
    }
    double getBonus(){
        return this->bonus;
    }
    void accept() override {
        Employee::accept();
        cout<<"enter bonus: ";
        cin>>bonus;
    }

    void display() override {
        Employee::display();
        cout<<"bonus is :"<<bonus<<endl;
    }

    void acceptManager(){
        cout<<"Enter bonus :";
        cin>>bonus;
    }
    void displayManager(){
        cout<<"bonus is :"<<bonus;
    }

};

class Salesman:virtual public Employee{
    protected:
    double commission;
    public:
    Salesman():Employee(),commission(0){

    }
    Salesman(int id , double salary , double commission):Employee(id, salary){
        this->commission= commission;

        
    }
    void setCommission(double commission){
        this->commission= commission;
        
    }
    double getCommission(){
        return this->commission;
    }
    void accept() override {
        Employee::accept();
        cout<<"enter Commision :";
        cin>>commission;

    }
    void display() override {
        Employee::display();
        cout<<commission;
    }

    void acceptSalesman(){
        cout<<"Enter details of the Salesman"<<endl;

        accept();
        
    }
    void displaySalesman(){
        cout<<"THis are the details of salesman :"<<endl;
        display();
    }
};


class SalesManager:public Manager ,public Salesman {

    public:
    SalesManager():Employee() , Manager() , Salesman()   {

    }
    SalesManager(int id , double salary ,double bonus,  double commission ):Employee(id , salary), Manager(id , salary , bonus) , Salesman(id , salary , commission){

    }

    void accept(){
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter salary";
        cin>>salary;
        cout<<"Enter bonus";
        cin>>bonus;
        cout<<"Enter the commision";
        cin>>commission;
        
    }
    void display(){
        cout<<"id is :"<<id<<endl;
        cout<<"salary is :"<<salary<<endl;
        cout<<"bonus is :"<<bonus<<endl;
        cout<<"commission is :"<<commission<<endl;

    }

};




int main(){

    Employee e1(10 , 20);
    cout<<"-----for the employee-----"<<endl;
    e1.display();
    
    Manager m1(10 , 20 , 30 );
    cout<<"-------For the Manager---------"<<endl;
    m1.display();

    Salesman s1(10 , 20 , 40 );
    cout<<"-------For the salesman----------"<<endl;
    s1.display();

    SalesManager ss1(1 , 2 , 3  , 4 );
    cout<<"---------For the SalesManager-------------"<<endl;
    ss1.display();





    return 0;
}
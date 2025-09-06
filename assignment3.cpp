// Q1. Write a class to find volume of a Cylinder by using following members. (volume of 
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI) 
// Class having following member functions: 
// Cylinder() 
// Cylinder(double radius, double height) 
// getRadius() 
// setRadius() 
// getHeight() 
// setHeight() 
// calculateVolume() 
// Initialize members using constructor member initializer list. 

#include<iostream>

using namespace std;

class cylinder{

    private:
    double radius;
    double height;
    static double pi;

    public:
    // cylinder(){
    //     this->radius = 1;                this both are the same
    //     this->height = 1;               // but below methos is fast and more recommanded.

    // }

    cylinder():radius(1)  , height(1){        // constructor member initializer list 

    }
    cylinder(double radius , double height){         // to set values 
        this->radius = radius;
        this->height = height;

    }

    void setRadius(double radius){
        this->radius = radius;
    }
    
    double getRadius(){
        return this->radius;
    }

     void setHeight(double height){
        this->height = height;
    }
    
    double getHeight(){
        return this->height;
    }

    void calculateVolumn(){
        double volumn = radius* height * radius * cylinder::pi;
        cout<<endl;
        cout<<"volumn of the cylinder is : "<<volumn<<endl;
    }
};

double cylinder::pi = 3.14;

int main(){


    cylinder c1;
    // c1.setHeight(10);
    // cylinder c2;
    // c2.setHeight(10);
    // c2.calculateVolumn();
    // c1.calculateVolumn();
    // cylinder(12, 10).calculateVolumn();
    
    bool tt = true;
    while(tt){

        int switch1;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"*    Enter you choice :    *"<<endl;
        cout<<"  1. for set Radius  :"<<endl;
        cout<<"  2. for set Height  :"<<endl;
        cout<<"  3. for get Radius  :"<<endl;
        cout<<"  4. for get height  : "<<endl;
        cout<<"  5. to  calculate the Volumn"<<endl;
        cout<<"  6. for exit "<<endl;
        cout<<endl;
        cout<<endl;

        cin>>switch1;


        switch(switch1){

            case 1 :{
                cout<<"Enter Radius :";
                int rad;
                cin>>rad;
                c1.setRadius(rad);
                break;
            }

            case 2 :{
                cout<<"Enter  height : ";
                int hei;
                cin>>hei;
                c1.setHeight(hei);
                break;
            }
            

            case 3 :{
                cout<<"Radius is :   ";
                double r1 = c1.getRadius();
                cout<<r1<<endl;
                break;

            }

            case 4 : {
                cout<<"height is : ";
                double h1  = c1.getHeight();
                cout<<h1<<endl;
                break;

            }


            case 5:
            {
                c1.calculateVolumn();
                break;

            }
            

            case 6:
            {
                tt = false;
                break;

            }

            default :{

            cout<<"enter valid opration "<<endl;
            }


        }

    }

    return 0;
}


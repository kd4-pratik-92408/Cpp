// Q1. Write a menu driven program to calculate volume of the box(length * width * height). 
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor. 
// Create the local objects in respective case and call the function to caluclate area. 
// Menu options ->  
// 1. Calculate Volume with default values 
// 2. Calculate Volume with length,breadth and height with same value 
// 3. Calculate Volume with different length,breadth and height values.

#include<iostream>

using namespace std;

class box{

    private:
    int length;
    int width;
    int height;
    int volumn;

    public:
    box(){                    // initialization of the length , H , width
        cout<<"constructor calling implicitly :"<<endl;
        cout<<"initialization of the height , lenght , width"<<endl;
        this->length= 0;
        this->height= 0;
        this->width = 0;
    }

    box(int length , int height  , int width ){
        this->length= length;
        this->height=height;
        this->width = width;
        int result = this->length* this->height * this->width;
        cout<<"volumn is :"<<result<<endl;
    
    }

    void cal_volumn(int length = 10 , int height = 10 , int width = 20){

        this->length = length ;
        this->height = height;
        this->width  = width;
        volumn = length * height * width;
        cout<<"volumn is :   ";
        cout<<volumn<<endl;
    }
    void cal_for_same(int same = 1){
        int vol = same* same* same;
        cout<<"volomn of the same length , height , width :"<<vol<<endl;
        
    }


    void print_volumn(void){
        cout<<"length is :  "<<length<<endl;
        cout<<"height is :  "<<height<<endl;
        cout<<"width is :  "<<width<<endl;
        cout<<"volumn is :  "<<volumn<<endl;

    }

};

int main() {
    int choice1;
    bool ttt = true;
    
    while(ttt) {
        cout << "1 for calculate volume with default values :" << endl;
        cout << "2. Calculate Volume with length, breadth and height with same value" << endl;
        cout << "3. Calculate Volume with different length, breadth and height values." << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the choice: ";
        cin >> choice1;
        
        switch (choice1) {
            case 1: {
                box b1;  // Create object with default constructor
                b1.cal_volumn();  // Calculate with default values
                break;
            }
            case 2: {
                int same;
                cout << "Enter value for all dimensions: ";
                cin >> same;
                box b2(same, same, same);  // Create object with same dimensions
                break;
            }
            case 3: {
                int l, h, w;
                cout << "Enter your length, height and width: ";
                cin >> l >> h >> w;
                box b3(l, h, w);  // Create object with specific dimensions
                break;
            }
            case 4: {
                cout << "You are exiting" << endl;
                ttt = false;  
                break;
            }
            default: {
                cout << "Please enter valid choice" << endl;
                break;
            }
        }
    }
    
    return 0;
}





























#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

double Square(){
    cout<< "Enter the value of  length"<<endl;
    double length;
    cin>>length;
    cout<<"Area of square is: ";
    return length * length;
}
double Rectangle() { 
    cout<< "Enter the value of the length"<< endl;
    double  length;
    cin>>length;
    cout<< "Enter value of the width"<<endl;
    double width;
    cin>>width;
    cout<<"The area of rectangle is: ";
    return length * width;
}
double Triangle(){

    cout<< "Enter the value of the base: "<<endl;
    double base;
    cin>>base;
    cout<< "Enter the value of height: "<<endl;
    double height;
    cin>>height;
    cout<<"The area of triangle is: ";
    return 0.5 * base * height;
}
int main() {
    bool quit = false;
    while (!quit) {
        cout<<"1. Square"<<endl;
        cout<<"2. Rectangle"<<endl;
        cout<<"3. Triangle"<<endl;
        cout<<"4. Quit program\n"<<endl;

        cout<<"Enter selection: "<<endl;
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
            cout<< ": "<<Square()<<endl;
            break;
            case 2:
            cout<< ": "<<Rectangle() <<endl;
            break;
            case 3:
            cout<< ": "<<Triangle()<< endl;
            break;
            case 4:
            cout<<"Good byeee!"<<endl;
            quit = true;
            break;
            default :
            cout<<"You have entered  an invalid option, Please enter the value between 1 and 4 "<<endl;
            
        }
    }
    return 0;
}
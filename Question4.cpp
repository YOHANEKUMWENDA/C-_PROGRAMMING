#include <iostream>
using namespace std;
int main(){

cout<<"Enter an integer value between 5 and 10: "<<endl;
int number;
cin>>number;
while(true){
if(!(cin>>number)){

cout<<"Sorry, you have entered an invalid number, please try agian "<<endl;
break;

}else 
if(number<=5 || number>=10){
    cout<<"You entered "<<number<<".Please enter a number between 5 and 10 "<<endl;
    break;

}else{
    cout<<"Your input value"<<number<<" has been accepted"<<endl;
    break;
}






}









return 0;





}




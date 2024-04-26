#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
 
 int daysOfExpiration;
 srand(time(0));
 daysOfExpiration=rand()%12;

 switch(daysOfExpiration){
    case 10:
    //daysOfExpiration==10
    cout<<"Your subscription will expire soon. Renew now!"<< endl;
    break;
    case 5:
    //daysOfExpiration==5
    cout<<"Your subscription expires in"<<" "<<daysOfExpiration<<"days" <<"Renew and save 10%"<<endl;
    break;
    case 1:
    //daysOfExpiration==1
    cout<<"Your subscription expires within aday! Renew and save 20%"<<endl;
    break;
    case 0:
    //daysOfExpiration==0
    cout<<"Your subscription has expired."<<endl;
    break;
    default :
    //daysOfExpiration!=10&&daysOfExpiration<10
    cout<<"You have an active subscription "<<endl;
    break;

 }


return 0;





}
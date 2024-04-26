#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){

int daysOfExpiration;

srand(time(0));
daysOfExpiration=rand()%12;
if(daysOfExpiration==10){
cout<<"Your subscription will expire soon. Renew now!"<<endl;}else
if(daysOfExpiration==5){
    cout<<"Your subscription expires in"<<daysOfExpiration <<" " <<"days"<< "Renew now and save 10% "<<endl;}else

if(daysOfExpiration==1){
    cout<<"Your subscription expires within a day ! Renew now and save 20% "<<endl;
}else 
if(daysOfExpiration==0){
    cout<<"Your subscription has expired."<<endl;
}else
if((daysOfExpiration!=10)&&(daysOfExpiration<10)){
    cout<<"You have an active subscription "<<endl;
}

return 0;



}
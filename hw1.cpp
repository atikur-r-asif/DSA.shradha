// hw1.1 
// Calculate "Simple Interest" from Principle(P), Rate(R) & Time(T).
// SI=Principal*Rate*Time
// principal(P)=initial amount of money 
// rate(R)=interest rate (R=percentage).
// time(T)=time in years 

#include <iostream>
#include <iomanip>
using namespace std;

double calculateSimpleInterest(double principal, double rate, double time){
    return(principal*rate*time)/100.0;
}
int main(){
     double principal;
     double rate;
     double time;
     double simpleInterest;

     std::cout<<std::fixed<<std::setprecision(2);

     std::cout<<"---Simple Interest---"<<std::endl;
     std::cout << "Enter the Principal amount: ";
     if(!(std::cin>>principal)||principal<0){
          std::cerr<<"Error! Invalid or negative Principal amount entered."<<std::endl;
          return 1;
     }

     std::cout<< "Enter the Annual Interest Rate: ";
     if  (!(std::cin>>rate)||rate<0){
          std::cerr<<"Error! Invalid or negative Rate entered."<<std::endl;
          return 1;
     }

     std::cout<<"Enter the Time period: ";
     if (!(std::cin>>time)||time<0){
          std::cerr<<"Error! Invalid or negative Time period entered."<<std::endl;
          return 1;
     }

     simpleInterest=calculateSimpleInterest(principal, rate, time);

     std::cout<<"---Calculation Result---"<<std::endl;
     std::cout<<"Principal(P): "<<principal<<" taka."<<std::endl;
     std::cout<<"Rate(R):"<<rate<<" %"<<std::endl;
     std::cout<<"Time(T):"<<time<<" years."<<std::endl;
     std::cout<<"=============================="<<std::endl;
     std::cout<<"Simple Interest(SI): "<<simpleInterest<<" taka."<<std::endl;
     std::cout<<"Total Amount(P+SI): "<<principal+simpleInterest<<" taka."<<std::endl;
     std::cout<<"=============================="<<std::endl;

    return 0;
}

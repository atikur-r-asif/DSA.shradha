//hw2 Calaulate max of two numbers.
//input (a,b)(4,5)
//(4>5)=yes=print 5
//(5<6)=no=print 5

#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int num_1, int num_2){
          if(num_1>num_2){
               return num_1;
          }else{
               return num_2;
          }
     }

int main(){
     int num_1;
     int num_2;
     int max;

     std::cout<<"---Calculate maximum of two Number---"<<std::endl;

     std::cout<<"Enter the first number: ";
     if(!(std::cin>>num_1)) {
          std::cerr<<"Invalid input for the first number. Exit the program."<<std::endl;
          return 1;
     }

     std::cout<<"Enter the second number: ";
     if(!(std::cin>>num_2)) {
          std::cerr<<"Invalid input for the second number. Exit the program."<<std::endl;
          return 1;
     }
     
     max=findMax(num_1,num_2);

     std::cout<<"Results: "<<std::endl;
     std::cout<<"The two numbers entered are "<<num_1<<" "<<"and"<<" "<<num_2<<"."<<std::endl;
     std::cout<<"The maximum of two number is: "<<max<<std::endl;
     std::cout<<"--------------"<<std::endl;
     return 0;
}
//pp2(min of two numbers)
//input (a,b)(4,5)
//(4<5)=yes=print 4
//(4>5)=no=print 4

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
     int num_1;
     int num_2;
     int min;

     std::cout<<"---Print minimum Number---"<<std::endl;

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

     if(num_1<num_2){
          min=num_1;
     }else{
          min=num_2;
     }

     std::cout<<"Results: "<<std::endl;
     std::cout<<"The two numbers entered are "<<num_1<<" "<<"and"<<" "<<num_2<<"."<<std::endl;
     std::cout<<"The minimum number is: "<<min<<std::endl;

     return 0;
}
//pp:05 is number prime or not?

#include <iostream>
#include <cmath>

bool isPrime(int n){
     if (n <= 1){
          return false;
     }
     if (n<=3){
          return true;
     }
     int divisor=2;
     int limit=static_cast<int>(std::sqrt(n));
     while(divisor<=limit){
          if(n%divisor==0){
               return false;
          }
          divisor++;
     }
     return true;
}

int main(){
     int number;

     std::cout<<"Enter a positive integer: "<<std::endl;
     while(!(std::cin>>number)||number<0){
          std::cout<<"Invalid input."<<std::endl; 
          std::cout<<"Please enter a positive integer: "<<std::endl;
          std::cin.clear();
          std::cin.ignore(10000, '\n');
     }
     if(isPrime(number)){
          std::cout<<number<<" is a prime number."<<std::endl;
     }else{
          std::cout<<number<<" is not a prime number."<<std::endl;
     }
     return 0;
}
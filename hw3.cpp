// hw3: Calculate factorial of N number.
// if n=5 then n!=1*2*3*4*5=120 
// non-negative (n!)
// return factorial result, or -1 if the input is negative


#include <iostream>
using namespace std;

int calculateFactorial(int n){
//long long calculateFactorial(int n){
     if(n<0){
          return -1;
     }
     if (n==0){              // 0! is defined as 1
          return 1;
     }

     int result=1;
     //long long result=1;
     for(int i=1; i<=n; ++i){
          result *= i;
     }
     return result;
}

int main(){
     int N;
    
     std::cout<<"Enter a non-negative integer (N). To calculate it's factorial: ";

     if(!(std::cin>>N)){
          std::cerr<<"Invalid input. Please enter a valid integer."<<std::endl;
          return 1;
     }

     int factorialResult=calculateFactorial(N);
     //long long factorialResult=calculateFactorial(N);
     
     if(factorialResult==-1){
          std::cout<<"Error: Factorial is not defined for negative numbers."<<std::endl;
     }else{
          std::cout<<"The factorial of "<<N<<" ("<<N<<"!) is: "<< factorialResult<<std::endl;
     }

     if(N>20){
        std::cout<<"Note: The result for large N might be inaccurate due to 'long long' storage limits."<<std::endl;
     }
     
     return 0;
}



//int=
//long long=
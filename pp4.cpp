//pp:04 Sum of num 1 to N.
// example verification (for N=3):
    // if n=3, the loop runs for counter=1, 2, 3.
    // iter 1: sum=0+1=1, counter=2
    // iter 2: sum=1+2=3, counter=3
    // iter 3: sum=3+3=6, counter=4
    // loop terminates. Result: 6 (which matches 1+2+3)


#include <iostream>
using namespace std;

long long calculateSum(int N){
     long long sum=0;
     int counter=1;

     while(counter<=N){
          sum+=counter;
          counter++;
     }
     return sum;
}

int main(){
     std::cout<<"---Sum 1 to N number---"<<std::endl;
     int n;
     std::cout<<"Enter a positive integer: ";
     if(!(std::cin>>n)){
          std::cerr<<"Invalid input. Please enter a valid number."<<std::endl;
          return 1;
    }
     
    if(n<1){
          std::cout<<"N must be a positive integer. Using N=1 instead."<<std::endl;
          n=1;
    }
     long long result=calculateSum(n);

     std::cout<<"The sum of numbers from 1 to "<<n<<" is: "<<result<<std::endl;

    return 0;
}




//in math n*(n+1)/2
//n=6 then sum=1+2+3+4+5+6=21
//factNum of n number (n!)
//n!=1*2*3*...*n

#include <iostream>
using namespace std;

long long factNum (int n){
     if(n<0){
          return -1;
     }
     if(n==0){
          return 1;
     }
     long long factNum =1;
     for(int i=1; i<=n; ++i){
          factNum *= i;
     }
     return factNum;
}

int main(){
     int number;
     cout<<"---Enter a positive number: ---"<<endl;
     if(!(cin>>number)){
          cerr<<"Invalid! Enter a positive number"<<endl;
          return 1;
     }

     long long fact = factNum(number);
     if(fact != -1){
          cout<<"The factorial of "<<number<<" ("<<number<<"!) is: "<<fact<<endl;
     }
     
     return 0;
}
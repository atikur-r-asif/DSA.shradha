//is the number prime or not
#include <iostream>
using namespace std;

int main(){
     int n=14;
     bool isPrime=true;

     for(int i=2; i<=n-1; i++){
          if(n%i==0){
               isPrime=false;
               break;
          }
     }
     if(isPrime==true){
          cout<<"Prime number"<<endl;
     }else{
          cout<<"Non Prime number"<<endl;
     }
     return 0;
}
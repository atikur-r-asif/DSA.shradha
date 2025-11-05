//print number 1-5 using while loop
#include <iostream>
using namespace std;

int main(){
     int count=1;
     while(count<=10){
          cout<<count<<" ";
          count ++;            //count=count+1, count+=1, count ++ (all are same)
     }
     cout<<endl;
     return 0;
}
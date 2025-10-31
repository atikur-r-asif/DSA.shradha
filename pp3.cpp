//pp:3 is number Odd or Even?
#include <iostream>
using namespace std;

int main(){
     int number;

    std::cout<<"Enter an integer: ";

    if(!(std::cin>>number)){
        std::cerr<<"Invalid input. Please enter a valid integer."<<std::endl;
        return 1;
    }

    if(number%2==0){
        std::cout<<number<<" is an EVEN number."<<std::endl;
    }else{
        std::cout<<number<< " is an ODD number."<<std::endl;
    }

     return 0;
}

//0 is even number.
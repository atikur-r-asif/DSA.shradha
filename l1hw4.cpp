//Given operations age, find if they should get a driving license or not.
//age=d, (age>=18), "yes" otherwise "no"

#include <iostream>
#include <limits>
using namespace std;

const int MINIMUM_DRIVING_AGE=18;

int main(){
     std::cout<<"--- Driving License Eligibility Check ---"<<std::endl;

     int age;

     while(true){
          std::cout<<"Please enter your age: ";

          if(std::cin>>age){
               if(age>=0&&age<100){
                    break;
               }else{
                    std::cout<<"Invalid age entered. Please enter a realistic, positive age."<<std::endl;
               }
          }else{
               std::cout<<"Invalid input. Please enter a whole number for your age."<<std::endl;
               std::cin.clear();
               std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          }
     }

     std::cout<<"--- Result ---"<<std::endl;

     if(age>=MINIMUM_DRIVING_AGE){
          std::cout<<"Congratulations! Since you are "<<age<<" years old,"<<std::endl;
          std::cout<<"you are ---ELIGIBLE--- to apply for a driving license (minimum age is "<<MINIMUM_DRIVING_AGE<<")."<<std::endl;
     }else{
          int years_remaining=MINIMUM_DRIVING_AGE-age;
          std::cout<<"Unfortunately, since you are only "<<age<<" years old,"<<std::endl;
          std::cout<<"you are ---NOT YET ELIGIBLE--- to apply for a driving license."<<std::endl;
          std::cout<<"You need to wait "<<years_remaining<<" more years."<<std::endl;
     }
     return 0;

}

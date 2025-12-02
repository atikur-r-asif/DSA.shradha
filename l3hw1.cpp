//sum of all numbers from 1 to n. which is divisibla by 3.
#include <iostream>
using namespace std;

long long calculateSumDivisibleBy3(int n) {
    long long sum = 0;

     for (int i = 1; i <= n; ++i) {
          if (i % 3 == 0) {
               sum += i;
          }
     }
     return sum;
}

// long long calculateSumEfficient(int n) {
//      long long k = n / 3;
//      return 3 * (k * (k + 1) / 2);
// }

int main() {
     int n;
     std::cout << "--- Sum of all  numbers from 1 to n ---\n";
     std::cout << "Enter the number: ";
     
     if (!(std::cin >> n) || n < 1) {
          std::cerr << "Invalid input. Please enter a positive integer.\n";
          return 1;
     }

     long long sumLoop = calculateSumDivisibleBy3(n);
     std::cout << "Sum of numbers divisible by 3 from 1 to " << n << " is: " << sumLoop << "\n";
     
     // long long sumMath = calculateSumEfficient(n);
     // std::cout << "Sum of numbers divisible by 3 from 1 to " << n << " is: " << sumMath << "\n";

     return 0;
}
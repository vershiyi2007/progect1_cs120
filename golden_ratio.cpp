/**
 * @file golden_ratio.cpp
 * @author(s) Brent George Vershiyi
 * @brief Finds the first pair of Fibonacci numbers whose ratio
 * is within a user-specified tolerance of the golden ratio.
 * @date 2026-09-14
 */

#include <iostream>
#include <cmath>

const double GOLDEN_RATIO = 1.618033988749895;

/**
 * @brief Finds and prints the first Fibonacci pair x, y where
 * |x/y - golden_ratio| < tolerance.
 * @param tolerance the acceptable difference from golden ratio.
 */
void golden_ratio(double tolerance) {
   long long x = 1, y = 1;
   
   while (std::abs(static_cast<double>(x) / y - GOLDEN_RATIO) > tolerance) {
      long long next = x + y;
      y = x;
      x = next;
   }
   
   std::cout << x << " " << y << std::endl;
}

// Controls the flow of the program:
int main() {
   double tolerance;
   std::cout << "Enter a tolerance: ";
   std::cin >> tolerance;
   
   golden_ratio(tolerance);
   return 0;
}
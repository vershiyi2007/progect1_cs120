/**
 * @file pascals_triangle.cpp
 * @author(s) Brent George Vershiyi
 * @brief Asks the user for a row number n and prints row n of
 * Pascal's Triangle on one line.
 * @version 0.1
 * @date 2026-09-14
 */

#include<iostream>

/**
 * @brief Computes n factorial.
 * @param n a non-negative integer.
 * @return n! (with 0! defined as 1).
 */
int factorial(int n) {
   long long result = 1;
   for (int i = 2; i <= n; i++) {
      result *= i;
   }
   return result;
}

/**
 * @brief Prints row number row of Pascal's Triangle, with a single
 * space between entries and no trailing space.
 * @param row the row to print (counting from 0).
 */
void print_pascal_row(int row) {
   for (int k = 0; k <= row; k++) {
      std::cout << factorial(row) / (factorial(k) * factorial(row - k));
      if (k < row) {
         std::cout << " ";
      }
   }
   std::cout << std::endl;
}

// Controls the flow of the program:
int main() {
   int n;
   std::cout << "Enter n: ";
   std::cin >> n;
   print_pascal_row(n);
   return 0;
}

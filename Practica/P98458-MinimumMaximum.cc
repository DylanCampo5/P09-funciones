/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P98458-Minimum_Maximum.cc
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 16 2023
 * @brief El máximo y el mínimo de dos valores cada uno almacenado en un mn y
   un mx.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P98458_en
 */

#include <iostream>
#include <algorithm>

void min_max(int a, int b, int& mn, int& mx) {
  mx = std::max(a, b);
  mn = std::min(a, b);
}

int main() {
  int knumero_a{0}, knumero_b{0}, mn{0}, mx{0};
  while (std::cin >> knumero_a >> knumero_b) {
    min_max(knumero_a, knumero_b, mn, mx);
    std::cout << min << " " << max;
  }
  return 0;
}

#include <iostream>
#include <vector>

double calculateScalarProduct(const std::vector<double>& vector1, const std::vector<double>& vector2) {
  if (vector1.size() != vector2.size()) {
    std::cerr << "Error: Los vectores no tienen la misma longitud." << std::endl;
    return 0;
  }

  double result = 0.0;
  for (size_t i = 0; i < vector1.size(); ++i) {
    result += vector1[i] * vector2[i];
  }
  return result;
}

int main() {
  //V1
  std::vector<double> vectorA;
    double element;
  while (std::cin >> element) {
    vectorA.push_back(element);
  }
  
  //Si no pongo esto, no sirve porque no el limpiado
  std::cin.clear();
  std::cin.ignore(numeric_limits<std::streamsize>std::max(), '\n');

  //V2
  std::vector<double> vectorB;
  while (std::cin >> element) {
    vectorB.push_back(element);
  }

  //Impresión
  double scalarProduct = calculateScalarProduct(vectorA, vectorB);
  if (scalarProduct != 0) {
    std::cout << scalarProduct << '\n';
  return 0;
  }
} //Nada, no compilar por algo de la línea 27 y no sé muy bien

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 21 Nov 2021
 * @brief Programa que muestra la resta de dos números armónicos.
 */

#include <iostream>
#include <iomanip>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa muestra la resta de dos numeros armonicos." << std::endl;
  return 0;
}

// @brief Esta función devuelve la resta de dos numeros armonicos.
// @param primer_armonico, segundo_armonico Los números a restar.
double RestaDeArmonicos(const int primer_armonico, const int segundo_armonico) {
  double numero_armonico{0};
  for (int contador{segundo_armonico + 1}; contador <= primer_armonico; ++contador) {
    numero_armonico += 1.0 / double(contador);
  }
  return numero_armonico;
}

int main() {
  // MensajeInicial()
  int primer_armonico, segundo_armonico;
  while (std::cin >> primer_armonico >> segundo_armonico) {
    std::cout << std::fixed << std::setprecision(10) << RestaDeArmonicos(primer_armonico, segundo_armonico) << std::endl;
  }
  return 0;
}
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 21 Nov 2021
 * @brief Programa que indica si un número es primo o no.
 */

#include <iostream>
#include <cmath>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa indica si un numero es primo o no." << std::endl;
  return 0;
}

// @brief Esta función comprueba si un número es primo o no
// @param numero Es el número a comprobar
bool EsPrimo(const int& numero) {
  if ((numero <= 1) or (numero == 4)) {
    return false; 
  } 
  for (int contador{2}; contador * contador < numero; ++contador) {
    if (numero % contador == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  // MensajeInicial()
  int cantidad_de_numeros;
  std::cin >> cantidad_de_numeros;
  for (int contador{0}; contador < cantidad_de_numeros; ++contador) {
    int numero_introducido;
    std::cin >> numero_introducido;
    std::cout << numero_introducido;
    if (EsPrimo(numero_introducido)) {
      std::cout << " is prime" << std::endl;
    } else {
      std::cout << " is not prime" << std::endl;
    }
  }
  return 0;
}

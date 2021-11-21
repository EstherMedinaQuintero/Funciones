/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 21 Nov 2021
 * @brief Programa que muestra si una secuencia de paréntesis está bien dada.
 */

#include <iostream>

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa muestra la resta de dos numeros armonicos." << std::endl;
  return 0;
}

// Si añaden un paréntesis cerrado y los abiertos ya eran iguales a los cerrados, está mal.
bool ComprobarSecuencia (const int cantidad_cerrados, const int cantidad_abiertos, const char nuevo) {
  if (nuevo == ')' && cantidad_abiertos == cantidad_cerrados) {
    return false;
  } else {
    return true;
  }
}

// Si el último es uno abierto o si las cantidades no coincide, están mal. 
bool ComprobarUltimo (const int cantidad_cerrados, const int cantidad_abiertos, const int nuevo) {
  if (nuevo == '(' || cantidad_abiertos != cantidad_cerrados) {
    return false;
  } else {
    return true;
  }
}

int main() {
  // MensajeInicial()
  int cantidad_parentesis_abiertos{0};
  int cantidad_parentesis_cerrados{0};
  bool estan_bien_cerrados{true};
  char ultima_letra_introducida;
  while (std::cin.peek() != '\n') {
    char letra_introducida;
    std::cin >> letra_introducida;
    if (letra_introducida != ')' or '(') {
      return 0;
    }
    ultima_letra_introducida = letra_introducida;
    estan_bien_cerrados = ComprobarSecuencia(cantidad_parentesis_cerrados, cantidad_parentesis_abiertos, letra_introducida);
    if (letra_introducida == '(') {
      ++cantidad_parentesis_abiertos;
    } else if (letra_introducida == ')') {
      ++cantidad_parentesis_cerrados;
    }
  }
  estan_bien_cerrados = ComprobarUltimo(cantidad_parentesis_cerrados, cantidad_parentesis_abiertos, ultima_letra_introducida);
  if (estan_bien_cerrados) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 25 Nov 2021
 * @brief Programa que comprueba si un string es palíndromo.
 */

#include <iostream>
#include <cstring>
#include <algorithm>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa comprueba si un string es palindromo." << std::endl;
  return 0;
}

/**
 * @brief Esta función comprueba si un string es palíndromo.
 * @param palabra_introducida Es el string a comprobar.
 * @return bool Devuelve verdadero si es palíndromo.
 */
bool is_palindrome(const std::string& palabra_introducida) {
  if (int(palabra_introducida.length()) > 1) {
    const int kTerminos{int(palabra_introducida.length())};
    std::string palabra_invertida(palabra_introducida.rbegin(), palabra_introducida.rend());
    for (int contador{0}; contador < kTerminos; ++contador) {
      if (palabra_introducida[contador] != palabra_invertida[contador]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  // MensajeInicial()
  std::string palabra_introducida_introducido{};
  std::cin >> palabra_introducida_introducido;
  std::cout << is_palindrome(palabra_introducida_introducido) << std::endl;
  return 0;
}
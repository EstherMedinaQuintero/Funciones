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
#include <cstring>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa muestra si una secuencia de parentesis esta bien dada." << std::endl;
  return 0;
}

// @brief Esta función separa un string por los espacios
// @param frase Es el string que queremos separar
bool CompruebaParentesis(std::string& frase) {
  const char KParentesisAbierto('(');
  const char KParentesisCerrado(')');
  while (frase.find(KParentesisAbierto) != std::string::npos) { // Mientras encontremos uno abierto
    if (frase.find(KParentesisCerrado) == std::string::npos) { // Si encontramos uno abierto pero no uno cerrado, pa' fuera
      return false;
    }
    if (frase.find(KParentesisAbierto) < frase.find(KParentesisCerrado)) { // Y siempre que el abierto esté antes que el cerrado
      frase.erase(frase.find(KParentesisAbierto), 1); // Quitamos uno de los abiertos
      frase.erase(frase.find(KParentesisCerrado), 1); // Quitamos uno de los cerrados
    } else { // Si el abierto y el cerrado están al revés, pa' fuera
      return false;
    }
  }
  if (frase == "") {
    return true;
  }
  return false; // Si acabamos sin problemas, es que estaba chachi
}

int main() {
  // MensajeInicial()
  std::string mensaje_introducido;
  std::cin >> mensaje_introducido;
  if (mensaje_introducido == "") {
    return 0;
  }
  if (CompruebaParentesis(mensaje_introducido)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}
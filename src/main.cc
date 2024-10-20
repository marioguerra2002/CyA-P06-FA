#include "alphabet.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <algorithm>


int main (int argc, char *argv[]) {
  // if (strcmp(argv[1], "--help") == 0) {
  //   std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
  //   return 0;
  // }
  if (argc != 3) {

  }
  std::ifstream input_fa(argv[1]);
  std::ifstream input_chain(argv[2]);
  std::string line;
  std::vector<std::string> fa;
  while (std::getline(input_fa, line)) {
    fa.push_back(line);
  }
  // imprimir fa para comprobar que se leyó correctamente
  for (long unsigned int i = 0; i < fa.size(); i++) {
    std::cout << i << ": ";
    std::cout << fa[i] << std::endl;
  }
  // comprobar si la primera linea tiene espacios
  Alphabet alphabet(fa[0]);
  alphabet.printAlphabet();



}
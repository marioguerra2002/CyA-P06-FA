#include "alphabet.h"
#include <algorithm>

Alphabet::Alphabet(std::string symbols) {
  // comprobar si hay espacios
  std::string auxiliar;
  for (long unsigned int i = 0; i < symbols.size(); i++) {
    if (symbols[i] != ' ') {
      auxiliar += symbols[i];
    } else if (symbols[i] == ' ' && auxiliar.size() > 0) {
      alphabet.insert(Symbol(auxiliar));
      auxiliar = "";
    }

  }
  if (auxiliar.size() > 0) {
    alphabet.insert(Symbol(auxiliar));
  }
  
}

std::set<Symbol> Alphabet::getAlphabet() const {
  return alphabet;
}
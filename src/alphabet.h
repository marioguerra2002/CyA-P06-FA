#include "symbol.h"
#include <vector>
#include <set>

class Alphabet {
  public:
    Alphabet(std::string);
    Alphabet() {}; // constructor por defecto
    std::set<Symbol> getAlphabet() const;
    void printAlphabet() const {
      for (auto symbol : alphabet) {
        
        symbol.printSymbol();
      }
    }
  private:
    std::set<Symbol> alphabet;
    
};


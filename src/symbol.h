#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <string>

class Symbol {
  public:
    Symbol(std::string);
    std::string getName() const;
    void setName(std::string);
    const bool operator==(const Symbol &) const;
    const bool operator!=(const Symbol &) const;
    const bool operator<(const Symbol &) const;

    void printSymbol() const {
      std::cout << name << std::endl;
    }
  private:
    std::string name;
};

#endif // SYMBOL_H
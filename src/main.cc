#include<iostream>
#include "Pieces.hh"
#include "Stack.hh"

int main()
{
  Pieces* type1{new Pieces("Plastico", "vasos", 235)};
  Pieces* type2{new Pieces("Ceramica", "platos", 160)};
  Pieces* type3{new Pieces("Metal", "Tenedores, Cuchara y Cuchillos", 350)};
  Pieces* type4{new Pieces("Vidrio ", "Copas de vino", 150)};

  Stack* stack{new Stack()};
  stack->Push(type1);
  stack->Push(type2);
  stack->Push(type3);
  stack->Push(type4);
  stack->Print();

  stack->Pop();

  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}


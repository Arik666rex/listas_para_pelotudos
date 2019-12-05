////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////

#define is ==
#define isnt !=

#include "./lib/lista.hpp"
#include "./lib/lista_vacia.hpp"
#include "./lib/es_vacia.hpp"
#include "./lib/borrar_lista.hpp"
#include "./lib/mostrar_lista.hpp"
#include "./lib/insertar_frente.hpp"
#include "./lib/insertar_fondo.hpp"
#include "./lib/menor_valor.hpp"
#include "./lib/mayor_valor.hpp"
#include "./lib/suma.hpp"
#include "./lib/largo.hpp"
#include "./lib/promedio.hpp"
#include "./lib/invertir_lista.hpp"

////////////////////////////////////////////////////////////////

int main (){

  //////////////////////////////////////////////////////////////

  std::cout << "\n";

  //////////////////////////////////////////////////////////////

  LISTA lista = Lista_Vacia();

  Mostrar_Lista( lista );

  //////////////////////////////////////////////////////////////

  lista = Insertar_Frente( lista, 4 );
  lista = Insertar_Frente( lista, 3 );
  lista = Insertar_Frente( lista, 2 );
  lista = Insertar_Frente( lista, 1 );
  lista = Insertar_Frente( lista, 0 );

  lista = Insertar_Fondo( lista, 5 );
  lista = Insertar_Fondo( lista, 6 );
  lista = Insertar_Fondo( lista, 7 );
  lista = Insertar_Fondo( lista, 8 );
  lista = Insertar_Fondo( lista, 9 );

  Mostrar_Lista( lista );

  //////////////////////////////////////////////////////////////

  std::cout << "\n";
  std::cout << "menor:    " << Menor_Valor( lista ) << "\n";
  std::cout << "mayor:    " << Mayor_Valor( lista ) << "\n";
  std::cout << "suma:     " << Suma(        lista ) << "\n";
  std::cout << "largo:    " << Largo(       lista ) << "\n";
  std::cout << "promedio: " << Promedio(    lista ) << "\n";
  std::cout << "\n";

  //////////////////////////////////////////////////////////////

  LISTA invertida = Invertir_Lista( lista );

  Mostrar_Lista( invertida );

  invertida = Borrar_Lista( invertida );

  Mostrar_Lista( invertida );

  //////////////////////////////////////////////////////////////

  lista = Borrar_Lista( lista );

  Mostrar_Lista( lista );

  //////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////
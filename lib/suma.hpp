////////////////////////////////////////////////////////////////

int Suma (
  LISTA _lista
){

  int suma = 0;

  for (
    LISTA nodo    = _lista;
          nodo isnt NULL;
          nodo    = nodo->sig
  ){

    suma += nodo->val;

  }

  return suma;

}

////////////////////////////////////////////////////////////////
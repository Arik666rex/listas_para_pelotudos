////////////////////////////////////////////////////////////////

int Menor_Valor (
  LISTA _lista
){

  int menor = _lista->val;

  for (
    LISTA nodo    = _lista;
          nodo isnt NULL;
          nodo    = nodo->sig
  ){

    if ( nodo->val < menor )
      menor = nodo->val;

  }

  return menor;

}

////////////////////////////////////////////////////////////////
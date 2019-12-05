////////////////////////////////////////////////////////////////

int Mayor_Valor (
  LISTA _lista
){

  int mayor = _lista->val;

  for (
    LISTA nodo    = _lista;
          nodo isnt NULL;
          nodo    = nodo->sig
  ){

    if ( nodo->val > mayor )
      mayor = nodo->val;

  }

  return mayor;

}

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

LISTA Invertir_Lista (
  LISTA _lista
){

  LISTA lista_invertida = Lista_Vacia();

  for (
    LISTA nodo    = _lista;
          nodo isnt NULL;
          nodo    = nodo->sig
  ){

    lista_invertida = Insertar_Frente( lista_invertida, nodo->val );

  }

  return lista_invertida;

}

////////////////////////////////////////////////////////////////
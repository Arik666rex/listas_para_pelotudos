////////////////////////////////////////////////////////////////

LISTA Insertar_Fondo (
  LISTA _lista,
  int   _valor
){

  if ( Es_Vacia( _lista ) ){

    LISTA nuevo_nodo = new NODO;

    nuevo_nodo->val = _valor;
    nuevo_nodo->sig = NULL;

    return nuevo_nodo;

  }
  else {

    LISTA lista_modificada = _lista;

    lista_modificada->sig = Insertar_Fondo( _lista->sig, _valor );

    return lista_modificada;

  }

}

////////////////////////////////////////////////////////////////
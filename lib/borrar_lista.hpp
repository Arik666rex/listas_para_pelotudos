////////////////////////////////////////////////////////////////

LISTA Borrar_Lista (
  LISTA _lista
){

  if ( Es_Vacia( _lista ) ){

    return Lista_Vacia();

  }
  else {

    Borrar_Lista( _lista->sig );

    delete _lista;

    LISTA nueva_lista = Lista_Vacia();

    return nueva_lista;

  }

}

////////////////////////////////////////////////////////////////
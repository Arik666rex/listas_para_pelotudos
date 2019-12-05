////////////////////////////////////////////////////////////////

void Mostrar_Lista (
  LISTA _lista
){

  if ( Es_Vacia( _lista ) ){

    std::cout << "[ lista vacia ] \n";

    return;

  }

  for (
    LISTA nodo    = _lista;
          nodo isnt NULL;
          nodo    = nodo->sig
  ){

    std::cout << "[ " << nodo->val << " ]";

  }

  std::cout << "\n";

}

////////////////////////////////////////////////////////////////
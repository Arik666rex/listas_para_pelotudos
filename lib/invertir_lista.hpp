////////////////////////////////////////////////////////////////

//LISTA Invertir_Lista (
//  LISTA _lista
//){
//
//  LISTA lista_invertida = Lista_Vacia();
//
//  for (
//    LISTA nodo    = _lista;
//          nodo isnt NULL;
//          nodo    = nodo->sig
//  ){
//
//    lista_invertida = Insertar_Frente( lista_invertida, nodo->val );
//
//  }
//
//  return lista_invertida;
//
//}

////////////////////////////////////////////////////////////////

LISTA Invertir_Lista (
  LISTA _lista
){

  //////////////////////////////////////////////////////////////

  if ( Es_Vacia( _lista ) )
    return NULL;

  //////////////////////////////////////////////////////////////

  LISTA  invertida = Invertir_Lista(            _lista->sig );
         invertida = Insertar_Fondo( invertida, _lista->val );

  return invertida;

  //////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////
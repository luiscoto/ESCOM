#include <stdlib.h>

typedef struct ele_inf {
 int val;
 char caracter;
   	
} Info;

typedef struct nodo {
	
	struct ele_inf E;
	
	struct nodo * sig;
	
} Nodo;

// Seccion de Alias

typedef struct nodo * pila;
typedef enum b { FALSE, TRUE } booleano;
typedef enum m { OK, NOMEMORY} mensaje; 

// Prototipos de las operaciones

  Info  pop ( pila *  P );
  mensaje push ( pila * P , Info I );
  booleano empty ( pila P );
  Info  top ( pila P );
  void crearpila ( pila * P );
  void vaciarpila ( pila * P );   
  
// Implementación de funciones

mensaje push( pila * P , Info I ){
   
   pila temp=NULL; 

   temp=(pila) malloc (sizeof(Nodo)); // paso 1
		 
	  if(temp == NULL)
	       return NOMEMORY;
		   
    temp->E=I; // paso 1
	   
   if (empty(*P)){
   	   	  
	  temp->sig=NULL; // paso 2
	  
   }else{
	 		 	
	  temp->sig=*P;  // paso 2	
	 	 	
	 }

     *P = temp; // paso 3
     
     return OK;
}

Info pop ( pila * p ){
	
	// paso 1
	pila aux;
	Info copia;
	copia=(*p)->E; // paso 1
	aux=(*p)->sig; // paso 2 
	free(*p); // paso 3 
	*p=aux; // paso 4 
	
	return copia; 
}

Info top ( pila p ){

	return p->E;

}

booleano empty (pila p){
	if( p == NULL )
	    return TRUE;
	return FALSE;      
}

void vaciarpila( pila * p ){
	   while ( !empty( *p ) ) {
	   	        pop( p );
	   }	
}

void crearpila ( pila * p  ){
	   *p = NULL;
}

#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero, *ultimo;


void insertarNodo();
void buscarNodo();
void desplegarLista();


int main(){
	
	int opcion_menu=0;
	do
	{
		cout << "\n|-------------------------------------|";
		cout << "\n|      � LISTA CIRCULAR SIMPLE �      |";
		cout << "\n|------------------|------------------|";
		cout << "\n| 1. Insertar      | 4. Eliminar      |";
		cout << "\n| 2. Buscar        | 5. Desplegar     |";
		cout << "\n| 3. Modificar     | 6. Salir         |";
		cout << "\n|------------------|------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu){
		case 1:
			cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
			insertarNodo();
			break;
		case 2:
			cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
			buscarNodo();
			break;
		case 3:
			cout << "\n\n MODIFICAR UN NODO DE LA LISTA \n\n";
			break;
		case 4:
			cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
			break;
		case 5: 
			cout << "\n\n DESPLEGAR LISTA DE NODOS \n\n";
			desplegarLista();
			break;
		case 6:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 6);
	
	return 0;
}

// primero = 45      ultimo = 12      nuevo  = 12                  45, 67, 89, 12                   actual = 12     encontrado = true    nodoBuscado = 89

// lista circular simple                    45 -> 67 -> 89 -> 12 -> primero								
 
void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato; 
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << "\n Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		do{
			
			if(actual->dato == nodoBuscado){
				cout << "\n El nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}while(actual!=primero && encontrado != true);
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout << "\n La lista se encuentra vacia\n\n";
	}
}

void desplegarLista(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		do{
			cout << "\n " << actual->dato;
			actual = actual->siguiente;
		}while(actual!=primero);
	}else{
		cout << "\n La lista se encuentra vacia\n\n";
	}
}



/*



*/







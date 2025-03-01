// pilas
#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void insertarPila(nodo *&, int);
void sacarPila(nodo *&,int &);

int main(){
	nodo *pila=NULL;
	int cant;
	int it;
	cout<<"Ingrese la cantidad: "; cin>>cant;
	for(int i=0;i<cant;i++){
		cin>>it;
	}
	insertarPila(pila,it);
	
	cout<<"\nSacando los elementos de la pila: ";
	while(pila != NULL){  // mientras no sea final de la pila
		sacarPila(pila,it);
		if(pila != NULL){
			cout<<it<<" , ";
		}else{
			cout<<it<<" . ";
		}
	}
	
	
	return 0;
}
void insertarPila(nodo *&pila, int n){
	nodo *nuevo_nodo= new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	for(int i=0;i<n;i++){	
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl;
	}
}

void sacarPila(nodo *&pila, int &n){
	nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
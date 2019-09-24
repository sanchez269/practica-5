#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
	int valor;
	Nodo *ptr;
	Nodo(int dato1){
		valor = dato1;
		ptr = NULL;
	}
};

void agregar(int);
void mostrar();
struct Nodo *lista=NULL;
int main(int argc, char** argv) {

	    int opcion, add;
	    while(opcion!=3){

	    cout << "MENU" << endl;
        cout << "\t1 .- Llenar nodos" << endl;
        cout << "\t2 .- Mostrar datos de nodos" << endl;
        cout << "\t3 .- Salir" << endl;
        cout << "Elije una opcion: ";
        cin >> opcion;

        	switch(opcion)
		{
			case 1:
				  cout << "Llenar nodos: " << endl;
				  cin>>add;
				  agregar(add);
				break;

			case 2:
				    cout << " Mostrar datos de nodos: " << endl;
				    mostrar();
				break;

			case 3:
				system("cls");
				cout << "Has elejido salir del programa.\n";
				system(" pause");
				break;

}
}

	 return 0;

}
void agregar( int add)
{
   Nodo *nuevo = new Nodo(0);
   nuevo->ptr=NULL;
   nuevo->valor=add;
   if(lista==NULL)lista=nuevo;
   else{
   	Nodo *aux=lista;
   	while(aux->ptr!=NULL){
   		aux=aux->ptr;

	   }
	   aux->ptr=nuevo;
   }

}
void mostrar()
{
   Nodo *aux;
   aux=lista;
   while(aux!=NULL){
   		cout<<aux->valor<<" ";
   		aux=aux->ptr;
	   }
	  cout<<endl;
   }

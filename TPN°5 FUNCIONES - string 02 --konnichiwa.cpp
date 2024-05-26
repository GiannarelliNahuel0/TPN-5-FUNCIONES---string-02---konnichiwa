#include <iostream>
#include <string>
using namespace std;

string nombrejapon (string nombre);

int main () {
	
string nombre;

cout<<"ingrese su nombre y su apellido: ";
getline(cin,nombre);	
	
cout<<"Konnichi wa, "<<nombrejapon (nombre)<<"-san.";
	 
	return 0;
}

string nombrejapon (string nombre){
	string nombrejaponizado;
	
	for(int i = 0 ; i < nombre.size() ; i ++ ) {
		nombrejaponizado+=nombre[i];
		if(nombre[i+1] != 'a' && nombre[i+1] != 'e' && nombre[i+1] != 'i' && nombre[i+1] != 'o' && nombre[i+1] != 'u' && nombre[i+1] != 'A' && nombre[i+1] != 'E' && nombre[i+1] != 'I' && nombre[i+1] != 'O' && nombre[i+1] != 'U'){
			if (nombre[i] != ' ' && nombre[i] != 'a' && nombre[i] != 'e' && nombre[i] != 'i' && nombre[i] != 'o' && nombre[i] != 'u' && nombre[i] != 'n' && nombre[i] != 'A' && nombre[i] != 'E' && nombre[i] != 'I' && nombre[i] != 'O' && nombre[i] != 'U' && nombre[i] != 'N'){
				
			nombrejaponizado+= 'u';
			}
			
		}
	
		
	}
	
	
	return nombrejaponizado;
}
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	
	int fecha[100],menorEdad,mayorEdad;
	string nombre[100],auxMenor,auxMayor;
	int x=0;
	
	for(int i=0;i<100;i++){
		cout << "Ingrese el nombre: ";
		cin >> nombre[i];
		if(nombre[i] == "fin"){
			break;
		}
		else{
		// concidero q el usuario ingresara correctamente
		// sino abria que hacer una verificacion
		cout << "Ingrese la fecha de nacimiento (AAAAMMDD): ";
		cin >> fecha[i];
		x++;
		}
	}
	menorEdad = mayorEdad = fecha[0];
	
	for(int y=0;y<x;y++){
		//for(int j=0;j<x;j++){
			if(fecha[y] > menorEdad){
				menorEdad = fecha[y];
				auxMenor = nombre[y];
			}
			if(fecha[y] < mayorEdad){
				mayorEdad = fecha[y];
				auxMayor = nombre[y];
			}
		//}
	}
	
	cout << "El mayor de edad es " << auxMayor << " y nacio el " << mayorEdad << endl;
	cout << "El menor de edad es " << auxMenor << " y nacio el " << menorEdad << endl;
	
	return 0;
}

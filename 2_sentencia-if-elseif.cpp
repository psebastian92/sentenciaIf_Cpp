//IF - ELSE IF

/* ELSE IF nos aportan mas condiciones a analizar para IF.

Forma de escribir (sintaxis):

if(condici�n a evaluar) {
    Bloque de Instrucciones si se cumple la condici�n....
}

else if (otra condici�n a analizar=
{
    Bloque de Instrucciones si NO se cumple la condici�n, pero se cumple
	esta nueva condici�n....
      
}

else {
	Bloque de Instrucciones si NO se cumplen las condiciones anteriores.
}

NO siempre es obligatorio escribir un "else" despu�s de un IF.

*/

#include <iostream>

using namespace std;

int main () {
	int edad;
	
	cout<<"Ingresa una edad para saber a que categoria perteneces "<<endl;
	cin>>edad;
	
	if (edad>0 && edad <11){
		cout<<"Categor�a JUNIOR";
	}
	
	else if (edad >=11 && edad <13) {
		cout<<"Categor�a CADETE"<<endl;
	}
	
	else if (edad >=13 && edad <18) {
		cout<<"Categoria JUVENIL"<<endl;
	}
	
	else { // else NO lleva par�ntesis, ya que analiza la condici�n del if.
		cout<<"Edad incorrecta, o fuera de las categorias";
	}
	
	return 0;
}

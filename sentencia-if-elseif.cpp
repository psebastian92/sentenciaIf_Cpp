//IF - ELSE IF

/* ELSE IF nos aportan mas condiciones a analizar para IF.

Forma de escribir (sintaxis):

if(condición a evaluar) {
    Bloque de Instrucciones si se cumple la condición....
}

else if (otra condición a analizar=
{
    Bloque de Instrucciones si NO se cumple la condición, pero se cumple
	esta nueva condición....
      
}

else {
	Bloque de Instrucciones si NO se cumplen las condiciones anteriores.
}

NO siempre es obligatorio escribir un "else" después de un IF.

*/

#include <iostream>

using namespace std;

int main () {
	int edad;
	
	cout<<"Ingresa una edad para saber a que categoria perteneces "<<endl;
	cin>>edad;
	
	if (edad>0 && edad <11){
		cout<<"Categoría JUNIOR";
	}
	
	else if (edad >=11 && edad <13) {
		cout<<"Categoría CADETE"<<endl;
	}
	
	else if (edad >=13 && edad <18) {
		cout<<"Categoria JUVENIL"<<endl;
	}
	
	else { // else NO lleva paréntesis, ya que analiza la condición del if.
		cout<<"Edad incorrecta, o fuera de las categorias";
	}
	
	return 0;
}

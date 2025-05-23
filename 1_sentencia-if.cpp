//SENTENCIA CONDICIONAL: IF

/* La sentencia IF sirve para analizar una condici�n, 
	y si se cumple dicha condici�n, har� las instrucciones
	que tiene entre llaves {}. Si NO se cumple la condici�n
	a analizar, esas instrucciones NO se ejecutar�n.

Forma de escribir (sintaxis):

if(condici�n a evaluar) {
    Bloque de Instrucciones si se cumple la condici�n....
}

else 
{
    Bloque de Instrucciones si NO se cumple la condici�n....
      
}

NO siempre es obligatorio escribir un "else" despu�s de un IF.

*/

#include <iostream>

using namespace std;

int main () {
	int contrasena_actual = 1992;
	int contrasena_ingresada;
	
	cout<<"Ingresa la contrasena: ";
	cin>>contrasena_ingresada;
	
	if (contrasena_ingresada == contrasena_actual){
		// Tambi�n se podr�a haber analizado (contrasena_ingresada == 1992)
		cout<<"Ingresando a su cuenta";
	}
	
	
	else { // else NO lleva par�ntesis, ya que analiza la condici�n del if.
		cout<<"Acceso denegado";
	}
	
	return 0;
}

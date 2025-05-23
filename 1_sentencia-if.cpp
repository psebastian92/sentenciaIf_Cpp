//SENTENCIA CONDICIONAL: IF

/* La sentencia IF sirve para analizar una condición, 
	y si se cumple dicha condición, hará las instrucciones
	que tiene entre llaves {}. Si NO se cumple la condición
	a analizar, esas instrucciones NO se ejecutarán.

Forma de escribir (sintaxis):

if(condición a evaluar) {
    Bloque de Instrucciones si se cumple la condición....
}

else 
{
    Bloque de Instrucciones si NO se cumple la condición....
      
}

NO siempre es obligatorio escribir un "else" después de un IF.

*/

#include <iostream>

using namespace std;

int main () {
	int contrasena_actual = 1992;
	int contrasena_ingresada;
	
	cout<<"Ingresa la contrasena: ";
	cin>>contrasena_ingresada;
	
	if (contrasena_ingresada == contrasena_actual){
		// También se podría haber analizado (contrasena_ingresada == 1992)
		cout<<"Ingresando a su cuenta";
	}
	
	
	else { // else NO lleva paréntesis, ya que analiza la condición del if.
		cout<<"Acceso denegado";
	}
	
	return 0;
}

//IF - ELSE IF CON CARACTERES

#include <iostream>

using namespace std;

int main () {
	char opcion;
	// Usaremos una sola letra. Por eso no le coloco [].
	
	cout<<"Elegi una opcion: "<<endl;
	cout<<"A. Cafe solo"<<endl;
	cout<<"B. Cafe cortado"<<endl;
	cout<<"C. Capuccino"<<endl;
	cin>>opcion;
	
	/* En este caso, utilizamos el operador lógico OR (||), ya que
	tenemos que tener en cuenta que la persona puede ingresar 
	en mayúsculas O en minúsculas. Si colocamos &&, esto nunca se 
	cumplirá, porque la condición a analizar sería "si opcion es
	= "A" Y A LA VEZ = "a".	
	*/

	
	if (opcion == 'A' || opcion == 'a'){ // edad>0 || edad <11
		cout<<"Disfrute su cafe solo";
	}
	
	else if (opcion == 'B' || opcion == 'b') {
		cout<<"Disfrute su cafe cortado"<<endl;
	}
	
	else if (opcion == 'C' || opcion == 'c') {
		cout<<"Disfrute su capuccino"<<endl;
	}
	
	else { // else NO lleva paréntesis, ya que analiza la condición del if.
		cout<<"Opcion incorrecta. Vuelva a iniciar el programa";
	}
	
	return 0;
}

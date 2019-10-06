/* Esta es la prueba uno del hash bancario 
	Nombre del proyecto:
		Sistema de Tarjetas de Banco
	Integrantes:
		Monteros Cervantes Miguel Angel
		Garcia Osorio Hector Manuel
	Materia y Grupo:
		Estructura de datos; 1CV10
	Avance: 2
*/
int Funcion_Hash_Primo(char *, long, int, int, int); 

#include <stdio.h>
int main (void){

	char *Nombres;
	int NIP, Sucursal, T_Cuenta; /* 16 digitos, 4 digitos, 1-15 sucursales, 1-4 tipos de cueta */
	long No_Cuenta;
	int numero;

	numero = Funcion_Hash_Primo("Miguel Angel Monteros Cervantes",7894545632124598,8932,7,3);
	numero = Funcion_Hash_Primo("Garcia Osorio Hector Manuel",7894545632124598,8932,7,3);


return 0;
}

int Funcion_Hash_Primo(char *Nombres, long No_Cuenta, int NIP, int Sucursal, int T_Cuenta){
	long numero = 0;
	int const p = 157, a = 101, b =103;

	if(Nombres == NULL /*|| No_Cuenta == NULL || NIP == NULL || Sucursal == NULL || T_Cuenta == NULL */)
	{
		return 0;
	}

	for (int i = 0; *(Nombres + i) != '\0'; ++i)
	{
		printf("%c",*(Nombres + i));
		numero = numero + *(Nombres);
	}

	numero = No_Cuenta + NIP + Sucursal + T_Cuenta;
	printf("\n%ld\n",numero );

	return (int)numero;
}
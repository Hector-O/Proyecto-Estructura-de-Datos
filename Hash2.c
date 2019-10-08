/* Esta es la prueba 4 del hash bancario 
	Nombre del proyecto:
		Sistema de Tarjetas de Banco
	Integrantes:
		Monteros Cervantes Miguel Angel
		Garcia Osorio Hector Manuel
	Materia y Grupo:
		Estructura de datos; 1CV10
	Avance: 4 Implementacion 2

	numero = Funcion_Hash_Primo("",,,,);
	printf("\n");
*/


#include <stdio.h>
#include <stdlib.h>

struct Contiguas
{
  int *datos;
  int coliciones;
  int cuantos;
};

int Funcion_Hash_Primo (char *, long, int, int, int);
void AgregarElemento (struct Contiguas **, int, int);
void Imprimir (struct Contiguas *);

int
main (void)
{
  struct Contiguas *lista = NULL;
  //La base de datos es unicamente para 50 usuarios

  char *Nombres;
  int NIP, Sucursal, T_Cuenta;	/* 16 digitos, 4 digitos, 1-15 sucursales, 1-4 tipos de cueta */
  long No_Cuenta;
  int numero;

  numero =
    Funcion_Hash_Primo ("Miguel Angel Monteros Cervantes", 7894545632124598,
			8932, 7, 4);
  AgregarElemento (&lista, numero, 8932);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Garcia Osorio Hector Manuel", 6512459327894548, 9382,
			3, 1);
  AgregarElemento (&lista, numero, 1657);
  printf ("\n");

  //Implementacion

  numero =
    Funcion_Hash_Primo ("Agudelo Echeverry Rubiel Alberto", 9442360649637971,
			5697, 3, 1);
  AgregarElemento (&lista, numero, 1);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alvarez Puerta Jhon Alexander", 2284384382643845,
			9124, 15, 3);
  AgregarElemento (&lista, numero, 103);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Betancur Pineda Mauro Albeiro", 8872965180129165,
			7310, 8, 2);
  AgregarElemento (&lista, numero, 354);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Cardona Loaiza Daniel", 8481259161322969, 7446, 4,
			2);
  AgregarElemento (&lista, numero, 82);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Castaño Piedrahita Jeisson Alejandro",
			4295993144759894, 4925, 11, 1);
  AgregarElemento (&lista, numero, 56562);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Grisales Ortiz Lina Marcela", 3367426665382934, 3982,
			9, 4);
  AgregarElemento (&lista, numero, 13);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("García Moreno María Maryory", 5469695795758363,
			3200, 1, 3);
  AgregarElemento (&lista, numero, 52);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Henao Zapata Martha Elena", 3130508141453867, 1651,
			12, 1);
  AgregarElemento (&lista, numero, 56964);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Hernandez Villa Marisol", 2772305759959506, 2849, 2,
			3);
  AgregarElemento (&lista, numero, 3564);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Mendoza Montoya Monica Patricia", 6895226933185803,
			1251, 4, 1);
  AgregarElemento (&lista, numero, 772);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Munera Parra Jhon William", 6408911217146510, 5918,
			14, 2);
  AgregarElemento (&lista, numero, 12575);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Pareja Arango Fernando de Jesus", 4371217461518075,
			1079, 10, 1);
  AgregarElemento (&lista, numero, 101);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Restrepo Prisco Hernan Dario", 8958652485097497,
			9536, 4, 2);
  AgregarElemento (&lista, numero, 102);	//15
  printf ("\n");

  numero =
    Funcion_Hash_Primo ("Bautista Encina Alfredo Manuel", 6748803484812912,
			1845, 11, 3);
  AgregarElemento (&lista, numero, 12);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Bautista Mejía Alejandro", 9256215128699663, 5964,
			10, 1);
  AgregarElemento (&lista, numero, 1231);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Bautista Vázquez Juan Miguel de Jesús",
			8895020229136847, 7560, 3, 1);
  AgregarElemento (&lista, numero, 355);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Betanzos Torres Noel", 9702212613256611, 3513, 2, 5);
  AgregarElemento (&lista, numero, 231);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Blanco Velasco Humberto Alejandro", 7971212619136958,
			6744, 6, 5);
  AgregarElemento (&lista, numero, 4563);
  printf ("\n");		//20

  numero =
    Funcion_Hash_Primo ("Bolaños Sánchez César", 3590818830221632, 5920, 8,
			3);
  AgregarElemento (&lista, numero, 45644);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Bremermann Borraz Moisés", 1648677635748511, 6793,
			10, 3);
  AgregarElemento (&lista, numero, 89);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Briseño Arias Abel", 8021457480778906, 0252, 15, 4);
  AgregarElemento (&lista, numero, 56);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Buenfil Díaz Iván", 3343476894385914, 7813, 5, 2);
  AgregarElemento (&lista, numero, 456);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Burguete García Miguel Ángel", 6327983114968298,
			5484, 5, 1);
  AgregarElemento (&lista, numero, 456);
  printf ("\n");		//25


  numero =
    Funcion_Hash_Primo ("Bustamante Guerrero J. Guadalupe", 8301365027184764,
			5902, 3, 1);
  AgregarElemento (&lista, numero, 98);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Caballero Green Francisco", 5266221565177641, 7729,
			1, 2);
  AgregarElemento (&lista, numero, 789);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Aguilar Pérez Fredy Francisco", 9266442725092530,
			8683, 7, 3);
  AgregarElemento (&lista, numero, 789);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alarcón Licona SalomónAlarcón", 1678217955895301,
			8910, 9, 3);
  AgregarElemento (&lista, numero, 546);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("López Gerardo Genaro", 5545414784776251, 5580, 5,
			5);
  AgregarElemento (&lista, numero, 546);
  printf ("\n");		//30

  numero =
    Funcion_Hash_Primo ("Alatriste Pérez Hipólito", 7099722938039925, 4350,
			12, 5);
  AgregarElemento (&lista, numero, 712);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alcántar Camacho José Israel", 6737845166773721,
			2531, 11, 3);
  AgregarElemento (&lista, numero, 89);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alcoverde Martínez Roberto Antonio",
			5942347684358269, 6804, 9, 2);
  AgregarElemento (&lista, numero, 213);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alderete Porras Jacinta Guillermina",
			6037930927770004, 9204, 8, 2);
  AgregarElemento (&lista, numero, 43);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Aldrete Vargas Adolfo", 3856064886503917, 2291, 9,
			1);
  AgregarElemento (&lista, numero, 97);
  printf ("\n");		//35

  numero =
    Funcion_Hash_Primo ("Alejo Guerrero Víctor Hugo", 5385116142934654, 3174,
			3, 2);
  AgregarElemento (&lista, numero, 5);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alemán Mundo Ma. del Rosario", 8194115319734402,
			8709, 4, 4);

  AgregarElemento (&lista, numero, 56456);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alemán Mundo Marcial", 7940480941831681, 7057, 4,
			3);
  AgregarElemento (&lista, numero, 45456);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Almogabar Santos Rocío", 5051942749296855, 6691, 4,
			2);
  AgregarElemento (&lista, numero, 787891);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Alonso Ibarra Pascual Gerardo", 2152494016063135,
			9052, 4, 5);
  AgregarElemento (&lista, numero, 456);
  printf ("\n");		//40

  numero =
    Funcion_Hash_Primo ("Alonso Navarro Jadilson", 9376892839811191, 7693, 13,
			5);
  AgregarElemento (&lista, numero, 456);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Altamirano García De León Sánchez Rodolfo",
			3090138383516372, 7286, 11, 5);
  AgregarElemento (&lista, numero, 7864);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("De Lira Ávalos AdánDel Razo Ruiz Armando",
			8440667298913610, 7708, 10, 3);
  AgregarElemento (&lista, numero, 7823);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Del Toro Arreola David", 9669830554149257, 5115, 8,
			1);
  AgregarElemento (&lista, numero, 7642);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Delgado Bugarín Norma", 1932874389337881, 7625, 7,
			1);
  AgregarElemento (&lista, numero, 456);
  printf ("\n");		//45

  numero =
    Funcion_Hash_Primo ("Delgado Guajardo Héctor Federico", 3140383461429251,
			1132, 7, 2);
  AgregarElemento (&lista, numero, 6789);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Delgado Salgado Clemente", 8612259328247195, 7832, 6,
			1);
  AgregarElemento (&lista, numero, 78);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Díaz Cruz Carlos", 8612259328247195, 3150, 14, 3);
  AgregarElemento (&lista, numero, 7862);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Díaz Morfín Julio César", 8963166299029357, 5697,
			4, 2);
  AgregarElemento (&lista, numero, 456);
  printf ("\n");
  numero =
    Funcion_Hash_Primo ("Duarte Briz Jesús Alfredo", 1654799882009293, 7937,
			7, 2);
  AgregarElemento (&lista, numero, 7937);
  printf ("\n");		//50

  numero =
    Funcion_Hash_Primo ("Duarte Briz Jesús Alfredo", 1654799882009293, 7937,
			7, 2);
  AgregarElemento (&lista, numero, 00000100);
  printf ("\n");		//50

  printf ("\n\n");
  Imprimir (lista);

  return 0;
}

int
Funcion_Hash_Primo (char *Nombres, long No_Cuenta, int NIP, int Sucursal,
		    int T_Cuenta)
{
  long long numero = 0;
  int const p = 9973, a = 509, b = 7372, m = 100;	//100 Cajas disponibles

  if (Nombres ==
      NULL
      /*|| No_Cuenta == NULL || NIP == NULL || Sucursal == NULL || T_Cuenta == NULL */
      )
    {
      return 0;
    }
  printf ("Nombre: ");
  for (int i = 0; *(Nombres + i) != '\0'; ++i)	//Sumas cada valor del nombre
    {
      printf ("%c", *(Nombres + i));
      numero = numero + *(Nombres);
    }

  numero = No_Cuenta + NIP + Sucursal + T_Cuenta;	//Sumas todos los datos numericos
  numero = numero % 9000;	//Dado que el universo es muy grande (más de 16 digitos), lo delimitamos unicamente a que el numero más grande sea 9000 (nueve mill

  numero = (((a * numero) + b) % p) % m;	// Aplicamos el Hash primo

  printf ("\tCaja: %lld", numero);

  return (int) numero;
}

void
AgregarElemento (struct Contiguas **lista, int posicion, int dato)
{
  if (lista == NULL)
    {
      return;
    }

  if (*lista == NULL)
    {
      *lista = (struct Contiguas *) malloc (sizeof (struct Contiguas));
      (*lista)->datos = (int *) malloc (sizeof (int) * 100);	//Creamos las 20 unidades de memoria
      //*((*lista)->datos) = dato;
      (*lista)->cuantos = 100;
      (*lista)->coliciones = 0;
    }
  if (*((*lista)->datos + (posicion - 1)) != 0)
    {
      (*lista)->coliciones = (*lista)->coliciones + 1;

      if (posicion == 100)
	{
	  AgregarElemento (lista, 1, dato);
	  return;
	}

      AgregarElemento (lista, posicion + 1, dato);
      //*((*lista)->datos + (posicion)) = dato; //+1
      return;
    }

  *((*lista)->datos + (posicion - 1)) = dato;
  printf ("\n");
}

void
Imprimir (struct Contiguas *lista)
{

  int i = 0;
  if (lista == NULL)
    {
      return;
    }
  for (i = 0; i <= lista->cuantos; i++)
    {
      printf ("%d: %d\n", i + 1, *(lista->datos + i));
    }
  printf ("\n coliciones: %d \n", lista->coliciones);
  //printf("%d\n",*(lista->datos + lista->actual) );
}

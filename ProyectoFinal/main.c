#include"proyecto.h"
int
main ()
{
  struct arbolDeBanco *unArbol = NULL;

  struct cuentaHabiente personaRaiz =
    { "Ana Morales G", 5234567891234567, 1245, 8, 2 };
  struct cuentaHabiente persona1 =
    { "Juan Perez Martinez", 7234567891234567, 1234, 7, 1 };
  struct cuentaHabiente persona2 =
    { "Sofia Maldonado Herrera", 1244567891234567, 1234, 7, 1 };
  struct cuentaHabiente persona3 =
    { "Menuel Aguirre Nuñez", 1234667891234567, 1234, 7, 1 };
  struct cuentaHabiente persona4 =
    { "Paulina Mora Carranza", 6456824598745632, 1234, 6, 2 };
  struct cuentaHabiente persona5 =
    { "Joseph Santos Alatorre", 8456824598745632, 1234, 6, 2 };
  struct cuentaHabiente persona6 =
    { "Karla Juarez Acosta", 9756824598745632, 1234, 6, 2 };
  struct cuentaHabiente persona7 =
    { "Salvador Montoya", 8356824598745632, 1234, 6, 2 };

  unArbol = insertarArbol (unArbol, personaRaiz);
  unArbol = insertarArbol (unArbol, persona1);
  unArbol = insertarArbol (unArbol, persona2);
  unArbol = insertarArbol (unArbol, persona3);
  unArbol = insertarArbol (unArbol, persona4);
  unArbol = insertarArbol (unArbol, persona5);
  unArbol = insertarArbol (unArbol, persona6);
  unArbol = insertarArbol (unArbol, persona7);

  printf("Todos los cuenta habientes son...\n");
  mostrarArbol (unArbol);
  puts ("");

  puts ("Consulta de usuario: ");
  consultarArbol (unArbol, persona3);
  puts ("");
  return 0;
}

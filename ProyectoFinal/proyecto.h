#ifndef __PROYECTO_H__
#define __PROYECTO_H__


#include<stdio.h>
#include<stdlib.h>

struct cuentaHabiente
{
  char Nombre[100];
  long long No_Cuenta;
  int NIP;
  int Sucursal;
  int T_Cuenta;
};


struct arbolDeBanco
{
  struct cuentaHabiente persona;
  struct arbolDeBanco *izq;
  struct arbolDeBanco *der;
};

struct arbolDeBanco *insertarArbol (struct arbolDeBanco *,struct cuentaHabiente);
void mostrarArbol (struct arbolDeBanco *);
struct arbolDeBanco *buscarArbol (struct arbolDeBanco *,struct cuentaHabiente);
int esHoja (struct arbolDeBanco *);
struct arbolDeBanco *padreDe (struct arbolDeBanco *,struct cuentaHabiente);
void consultarArbol (struct arbolDeBanco *,struct cuentaHabiente );
struct arbolDeBanco *ElimiarCuenta(struct arbolDeBanco *,struct cuentaHabiente);
int Vacio(struct arbolDeBanco *);


#endif
# Proyecto-Estructura-de-Datos
## **Sistema de Tarjetas de Banco**

Integrantes:

1. Monteros Cervantes Miguel Angel
2. Garcia Osorio Hector Manuel

Resumen:

Este sistema simula una aplicación muy común en los bancos, que es la asignación de una unidad de memoria a cada uno de sus clientes, esta ubicación solo es conocida por el banco y está dada con respecto a los siguientes datos del usuario:

Nombre y Apellido

No. De cuenta

NIP

Sucursal

Tipo de cuenta

Cada uno de estos datos se computarizan con una función hash, la cual no otorga una posición en la base de datos del banco, lugar donde se almacenará la cantidad monetaria del usuario en ese momento; Dado a que existen diferentes usuarios en el banco, los cuales solicitan los servicios casi simultáneamente, estos serán atendidos con prioridad respecto de cómo fueron llegando, es decir, en una cola o fila.


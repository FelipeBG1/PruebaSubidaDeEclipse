/*
 * ArrayEmployees.h
 *
 *  Created on: 15 may. 2020
 *      Author: felib
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;

}eEmployee;


#endif /* ARRAYEMPLOYEES_H_ */
/** \brief llama al menu de opciones y a la funcion elegida por el usuario
 *
 * \param vector de eEmpleado para pasar como parametro a las funciones a llamar
 * \param tamaño del vector para pasar como parametro a las funciones a llamar
 *
 */
void informar(eEmployee vec[], int tam);

/** \brief menu que muestra las opciones de los diferentes informes
 *
 * \return opcion que ingresa el usuario
 *
 */
int menuInformar();

/** \brief menu principal de opciones
 *
 * \return opcion que ingresa el usuario
 *
 */
int mostrarMenu();

/** \brief le da valor 1 al campo isEmpty de cada empleado
 *
 * \param vector de empleados que se va a recorrer
 * \param tamaño del vector de empleados
 *
 */
void inicializarEmpleados(eEmployee vec[],int tam);

/** \brief busca un espacio vacio en un vector de eEmpleado y le carga los datos si el usuario ingresa
 *  bien todos los campos
 *
 * \param id a asignarle al nuevo empleado
 * \param vector de eEmpleado a utilizar para cargar el nuevo empleado
 * \param tamaño del vector de eEmpleado para recorrer
 *
 * \return 1 si pudo cargar los datos, -1 si no lo pudo hacer
 *
 */
int altaEmpleado(int idX,eEmployee vec[], int tam);

/** \brief busca en un vector de eEmpleados si hay un espacio con isEmpty=1
 *
 * \param vector de eEmpleado a recorrer
 * \param tamaño del vector a recorrer
 *
 * \return -1 si no encuentra espacio vacio,sino el indice del espacio vacio encontrado
 *
 */
int buscarLibre(eEmployee vec[],int tam);

/** \brief busca un empleado a partir de un id
 *
 * \param id del empleado a buscar
 * \param vector de empleados
 * \param tamaño del vector de empleados
 * \return -1 si no encontro ningun empleado con ese id, sino devuelve la posicion de ese empleado
 *
 */
int buscarEmpleado(int id, eEmployee vec[], int tam);

/** \brief realiza la baja logica de un empleado
  *
  * \param vector de empleados
  * \param tamaño del vector de empleados
  *
  */
void bajaEmpleado(eEmployee vec[], int tam);

/** \brief ordena el vector de empleados por apellido y sector
 *
 * \param vector de empleados
 * \param tamaño del vector de empleados
 *
 */
void ordenarEmpleados(eEmployee vec[], int tam);

/** \brief muestra los datos de un empleado
 *
 * \param posicion del empleado
 *
 */
void mostrarEmpleado(eEmployee x);

/** \brief muestra a todos los empleados del vector de empleados
 *
 * \param vector de empleados
 * \param tamaño del vector de empleados
 *
 */
 void mostrarEmpleados(eEmployee vec[],int tam);

 /** \brief realiza la modificacion de los datos de un empleado
  *
  * \param vector de empleados
  * \param tamaño del vector de empleados
  *
  */
  void modificarEmpleado(eEmployee vec[],int tam);

  /** \brief informa el total de sueldos junto con el promedio y que empleados superan el promedio
   *
   * \param vector de empleados
   * \param tamaño del vector de empleado
   *
   */
  void informarTotalSueldos(eEmployee vec[], int tam);

  /** \brief menu de las opciones a modificar
     *
     * \return la opcion ingresado por el usuario
     *
     */
   char menuModificar();


int utn_getEntero(int* pEntero,int reintentos,char* msg,char*msgError,int min,int max);
int utn_getFlotante(float*pFloat,int reintentos,char* msg,char*msgError,float min,float max);
int getCadena(char* pAux,int limite);
int getInt(int* pAux);
int isInt(char *pAux);
int isFloat(char* pAux);
int getFloat(float*pAux);
int utn_getCadena(char *pAux,int limite,int reintentos,char* msj,char*msjError);
int isLetras(char*pAux);
int validateFlag(int* flag, char* msgError);

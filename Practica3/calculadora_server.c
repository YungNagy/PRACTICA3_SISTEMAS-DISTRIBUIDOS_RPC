/*
 *COMENZAMOS A REALIZAR LAS FUNCIONES A REALIZAR
 * 
 */

#include "calculadora.h"

//Funcion de Suma
float *
suma_1_svc(valores *argp, struct svc_req *rqstp)
{
	static float  result;
	//Asignamos las variables
	float i=argp->i;
	float j=argp->j;
	//Realizamos la operacion
	result=i+j;
	return &result;
}

//Funcion de Resta
float *
resta_1_svc(valores *argp, struct svc_req *rqstp)
{
	static float  result;
	//Asignamos las variables
	float i=argp->i;
	float j=argp->j;
	//Realizamos la operacion
	result=i-j;
	return &result;
}

//Funcion de Multiplicacion
float *
multiplicacion_1_svc(valores *argp, struct svc_req *rqstp)
{
	static float  result;
	//Asignamos las variables
	float i=argp->i;
	float j=argp->j;
	//Realizamos la operacion
	result=i*j;
	return &result;
}

//Funcion de Division
float *
division_1_svc(valores *argp, struct svc_req *rqstp)
{
	static float  result;
	//Asignamos las variables
	float i=argp->i;
	float j=argp->j;
	//Realizamos la operacion
	result=i/j;
	return &result;
}

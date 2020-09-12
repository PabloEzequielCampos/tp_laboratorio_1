/*
 ============================================================================
 Name        : TP1_Laboratorio1.c
 Author      : Pablo E. Campos DIV. 1.E
 Version     :
 Copyright   : TP1 LABORATORIO 1
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pcampos.h" // BIBLIOTECA INCLUIDA

int main(void) {
	setbuf(stdout, NULL);

	int firstNumber;
	int secondNumber;
	int sumResult;
	int subtractionResult;
	float divideResult;
	int multiplyResult;
	int factorial1Result;
	int factorial2Result;

																								// INICIO MENU
	printf(
			"\n         ############################################################");
	printf(
			"\n         º               :: C A L C U L A D O R A ::                º");
	printf(
			"\n         ###########################################################º");
	printf(
			"\n         º    Al ingesar los operandos se mostraran en pantalla:    º");
	printf(
			"\n         º                  Todos estos resultados                  º");
	printf(
			"\n         º                                                          º");
	printf(
			"\n         º          +) Suma                    /) Division          º");
	printf(
			"\n         º                                                          º");
	printf(
			"\n         º          -) Resta                   *) Multiplicacion    º");
	printf(
			"\n         º                                                          º");
	printf(
			"\n         º                       !) Factorial                       º");
	printf(
		    "\n         º                                                          º");
	printf(
			"\n         #############################################################\n");
																									//FIN MENU





	printf("\n         Ingrese Primer Operando:   "); 												// INGRESO DE PRIMER NUMERO
	scanf("%d", &firstNumber);

	printf("\n         Ingrese Segundo Operando:  "); 												// INGRESO DEL SEGUNDO
	scanf("%d", &secondNumber);



	sumResult = sum(firstNumber, secondNumber);
	subtractionResult = subtraction(firstNumber, secondNumber);
	divideResult = divide(firstNumber, secondNumber);
	multiplyResult = multiply(firstNumber, secondNumber);
	factorial1Result = factorialValue1(firstNumber);
	factorial2Result = factorialValue2(secondNumber);


	printf("\n         El resultado de la Suma de ambos es: %d \n", sumResult); 					// RESULTADO SUMA
	printf("\n         El resultado de la Resta de ambos es: %d \n",subtractionResult); 			// RESULTADO RESTA

	if(secondNumber == 0){
	printf("\n         Ingresaste 0 como segundo Operando :  No se puede dividir por 0 \n "); 		// ERROR EN DIVISION POR INGRESO DE 0
		}else {
	printf("\n         El resultado de la Division de ambos es: %.2f \n",divideResult);				// RESULTADO DIVISION
		}

	printf("\n         El resultado de la Multiplicacion de ambos es: %d \n",multiplyResult); 		// RESULTADO MULTIPLICACION
	printf("\n         El factorial del primer operando ingresado es: %d \n",factorial1Result); 		// RESULTADO FACTORIAL 1
	printf("\n         El factorial del segundo operando ingresado es : %d \n",factorial2Result); 	// FACTORIAL 2


	printf("\n         º  ##########################################################  º\n");





	return 0;
}


/*
 ============================================================================
 Name        : Ficha1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//================Alinea 1 ==============================//
	float pi = 3.14;
	float raio = 2.5;

	float area = pi*raio*raio;


//========================Alinea 2 =========================//
    int lado=1;
    int altura=3;
	int perimetro= 2* (lado+altura);
	printf("%i",perimetro);


//=========================Alinea 3 =======================//

int a = 5;
int b = 3;
int c = 7;
int d= 10;
int e = 1;

float media =(a+b+c+d+e)/ 5.0;
printf("%f", media);





//=====================Alinea 4 =========================//


 float fahr = 212;
 float celsius = (fahr - 32) / 1.8;
 printf()






//================== Alinea 5===========================//

 float distancia = 370;
 float consumo = 40;
 float kms= 100 ;
 float media = (100* 40) / 370;
printf(" A media do seu auto aos %.1f é %.1f, kms , media");



//================= Alinea 6========================//


int horas = 8;
int min = 22;
int segundos= 10;
int total= horas*3600+22*60+10;
printf("total%d",total);












return EXIT_SUCCESS;
}


#include <stdio.h>

int main(){

int a[3][3];
int b[3][3];
int filas,columnas;
//Llenar la matriz A
for(filas=0; filas<3; filas++){
	for(columnas=0; columnas<3; columnas++){
		printf("Ingrese valores a la matriz : ");
		scanf("%d", &a[filas][columnas]);
		}
}
for(filas=0; filas<3; filas++){
	printf("\n");
	for(columnas=0; columnas<3; columnas++){
		


	printf("%d\t", a[filas][columnas]);
	}
}



printf("\n");

// Llenar la matriz B
printf("Matriz B\n");
for(filas=0; filas<3; filas++){
	for(columnas=0; columnas<3; columnas++){
		printf("Ingrese valores a la matriz : ");
		scanf("%d", &b[filas][columnas]);
		}
}
for(filas=0; filas<3; filas++){
	printf("\n");
	for(columnas=0; columnas<3; columnas++){
	printf("%d\t", b[filas][columnas]);	
	}
}
printf("\n");





}

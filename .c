#include <stdio.h>
#include <string.h>

/*
  Iterar
   Meter arreglos
*/

struct info {
	char nombre[25];
	char apPaterno[25];
	char apMaterno[25];
	char direccion[25];
};

struct academico {
	char numeroEmpleado[13];
	struct info datos_profesor;
} profesor[5]; 

struct alumnado {
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante;
} estudiante[4];


void registrarAcademicos(int num_registros) {
	int i;
	
	

    printf("\nNota: Solo se podran registrar %d academicos\n\n", num_registros);
	
	for (i = 0; i < num_registros; i++) {
		getchar();
		fflush(stdin);
		printf("Dame número empleado: ");
		fgets(profesor[i].numeroEmpleado, 13, stdin);
		fflush(stdin);
		printf("Dame nombre: ");
		fgets(profesor[i].datos_profesor.nombre, 25, stdin);
		fflush(stdin);
		printf("Dame apellido paterno: ");
		fgets(profesor[i].datos_profesor.apPaterno, 25, stdin);
		fflush(stdin);
		printf("Dame apellido materno: ");
		fgets(profesor[i].datos_profesor.apMaterno, 25, stdin);
        printf("\n<--------- Información capturada --------->\n");
		printf(" ID: %s", profesor[i].numeroEmpleado);
		printf(" Nombre: %s", profesor[i].datos_profesor.nombre);
		printf(" Apellido paterno: %s", profesor[i].datos_profesor.apPaterno);
		printf(" Apellido materno: %s", profesor[i].datos_profesor.apMaterno);
        printf("<----------------------------------------->\n");
	}
}

void registrarAlumnos(int num_registros) {
	int i;

	printf("\nNota: Solo se podran registrar %d alumnos\n\n", num_registros);

	for (i = 0; i < num_registros; i += 1) {
		getchar();
		fflush(stdin);
		printf("Dame número estudiante: ");
		fgets(estudiante[i].numeroCuenta, 13, stdin);
		fflush(stdin);
		printf("Dame el promedio del estudiante: ");
		fgets(estudiante[i].promedio, 5, stdin);
		fflush(stdin);
		printf("Dame nombre: ");
		fgets(estudiante[i].datos_estudiante.nombre, 25, stdin);
		fflush(stdin);
		printf("Dame apellido paterno: ");
		fgets(estudiante[i].datos_estudiante.apPaterno, 25, stdin);
		fflush(stdin);
		printf("Dame apellido materno: ");
		fgets(estudiante[i].datos_estudiante.apMaterno, 25, stdin);
        printf("\n<--------- Información capturada --------->\n");
		printf(" ID: %s", estudiante[i].numeroCuenta);
		printf(" Promedio: %s", estudiante[i].promedio);
		printf(" Nombre: %s", estudiante[i].datos_estudiante.nombre);
		printf(" Apellido paterno: %s", estudiante[i].datos_estudiante.apPaterno);
		printf(" Apellido materno: %s", estudiante[i].datos_estudiante.apMaterno);
        printf("<----------------------------------------->\n");
	}
}

void menu () {
	int op;
    int num_registros = 0;

	puts("¿Qué deseas capturar?");
	puts("1.-Profesorado");
	puts("2.-Alumnado");
    printf("R(1/2): ");
	scanf("%i", &op);

	if (op == 1) {
		
		num_registros = 5;
		registrarAcademicos(num_registros);
	} else if (op == 2) {
		num_registros = 4;
		registrarAlumnos(num_registros);
	} else {
		printf("Dame una opción válida");
	}

}

int main(void){
	menu();
	return 0;
}

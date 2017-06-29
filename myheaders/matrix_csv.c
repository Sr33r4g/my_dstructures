#include "matrix_csv.h"
#include <stdio.h>
#include <string.h>

#define csv_extension ".csv"

void generate_csv(char * name, int * arr, int r, int c){

	char * s = malloc(sizeof(char));

	strcpy(s,name);
	strcat(s,csv_extension);

	// printf("\n%s\n",s);

	FILE * file = fopen(s,"w+");

	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){
			fprintf(file,"%d,",*(arr + (i*c) + j));
		}

		fprintf(file,"\n");
	}		

	free(s);
	fclose(file);

}


void generate_bool_csv(char * name, bool * arr, int r, int c){

	char * s = malloc(sizeof(char));
	strcpy(s,name);
	strcat(s,csv_extension);

	FILE * file = fopen("name.csv","w+");

	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){
			fprintf(file,"%d,",*(arr + (i*c) + j));
		}

		fprintf(file,"\n");
	}		

	free(s);
	fclose(file);

}



// void generate_csv(char * name, int * matrix, int rows, int cols);
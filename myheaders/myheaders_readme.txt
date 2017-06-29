

--------****** THIS FILE CONTAINS A SHORT DESCRIPTION OF THE USE OF ALL THE LIBRARIES I'VE CREATED ******--------

--------------------------------------------------********************************--------------------------------------------------------
matrix_csv -  this is used to generate a csv representation of any matrix.
	|------ generate_csv(char * , int * , int , int )
		\ 
		 --- file name with which to be saved 
		 --- integer array pointer
		 --- rows
		 --- columns


	|------ generate_bool_csv(char * , bool * , int , int )
		\
		 --- file name with which to be saved 
		 --- boolean array pointer
		 --- rows
		 --- columns

		 command : gcc -o <filename> <sourcefile> "myheaders/matrix_csv.c"

--------------------------------------------------********************************--------------------------------------------------------
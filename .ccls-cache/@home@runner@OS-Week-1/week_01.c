#include "week_01.h"    
#include <stdio.h>
#include <stdlib.h>                    

void problem_01(){
  printf("Hello World\n");
    
}

void problem_02(){
  char  name[10]; // 10 is max length. string included \ 0
  //char * name;// No length defined, it grows dynamically
 

  printf ("Write the name: " );
  if(!scanf("%s",name)){
      printf("failed reading name");
  }
  //fgets(name, 10 , stdin);
  printf ("Hello %s \n", name);
    
}

void problem_03(){
 
  long int num=9;
	int num1;
	double r=5.1; 
	printf ("; %ld;  ; %4ld;  ; %-4ld;  ; %6.4ld;  ; %2d; \n", num, num, num, num, num1);
	printf ("; %f;  ; %9f;  ; %-9f;  ; %9.4f;  ; %2f;  \n", r, r, r, r, 111);
	printf ("; %c;  ; %s;  ; %7s;  ; %-7s;  ; %7.4s; \n", 'a', "uno", "dos", "tres", "cuatro");

	printf ("dar numeros separados por ; \n");
	scanf ("%d; %ld", &num1, &num);
	printf ("; %d; ; %ld; \n", num1, num);

      

    
}

  
void problem_04 (int argc, char *argv[]) {

  printf ("Number of parameters : %d\n", argc);
 
  printf ("List of parameters \n" );
 
  for (int i=0; i< argc; i++)  
    printf ("parameter %d = %s\n", i, argv[i]);

}

float sumar (float a, float b){

 return(a+b);
}

int main (int argc, char **argv) {

   float n1, n2, suma;

   n1 = atof(argv[1]);
   n2 = atof(argv[2]);

   suma = sumar(n1, n2); 
  
   printf ("Sum = %.3f \n", suma);
}


void problem_06(){
  
    
}

void problem_07(){
  
    
}

void problem_08(){
  
    
}
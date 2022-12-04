#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* getlin () {
int c;
int *p;
int i=0;
char* Array = malloc(sizeof(char));

Array[i]='\0';//

c = getchar();

while (c !='\n'&&c!=EOF){
Array[i] = c;

i++;
Array=realloc(Array,((i+1)*sizeof(char))); 

Array[i]='\0'; //it is done to make sure that after exiting the while loop last sign is \n
c=getchar();
}
ungetc(c, stdin);//ungetc returns char c back to the stream which is specified as the second argument
return Array;
}

int  word (char* W){

int len = strlen(W); //W strnlen(W, 10);można ograniczyć długość stringa jaki ma być sczytany do np. 10 liter

//printf("dlugosc linii to: %d\n",len);

int i = len;

while (i>=0){

for (;i>=0 && W[i] !=' '; --i){
//printf("%c",W[i]);
}
//printf ("\ni = %d\n", i);
printf("%s ",&W[i+1]); //W[i] == ' ' wiec zaczynamy od kolejnego znaku
W[i] = '\0'; // ustawiamy znak konca stringa dla kolejnego wyrazu
i--;
}
printf("\n");

return 0;
}



 
int main (){

printf("Enter your text and press ENTER:\n");
int c,i =0;
do {
char *A=getlin();
word(A);
//printf("Line %d: %s\n", i,A);
i++;
free(A);
}while((c=getchar()) != EOF);





return 0;
}

#include<stdio.h>
#include<stdlib.h>


char* getlin () {
int c;
int *p;
int i=0;
char* Array = malloc(sizeof(char));

Array[i]='\0';

while ((c = getchar()) !=EOF){

Array[i] = c;

i++;
Array=realloc(Array,((i+1)*sizeof(char))); 

Array[i]='\0'; 
}
return Array;
}
#if 0
	
//	int i;
//	int count;
	
//	count = 0; 
//int *tmp = malloc(10 * sizeof(int));
//important assign x before we increment tmp
/*x= tmp;
	for (i=lower; i<=upper; i+=step) {//or i=i+step
	
	*tmp=i;
        tmp++;
        count++;

	if (count>=10){

	tmp = realloc (*x, ((count+1)*sizeof(int)));
if (tmp == NULL){
	printf("Not enough memory - exiting...");

	return -ENOMEM;
	
}
	*x = tmp;
*/


while ((c = getchar()) !=EOF)
{
p=malloc(sizeof(char));
*p=putchar(c);
(*p)++;
}
return;
}
#endif 
int main (){

printf("Enter your text and press ENTER:");

char *A=getlin();

printf("%s", A);

return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef char* string;
int main(void)
{
    FILE *file = fopen("phonebook.csv","a");
    if(!file)
      return 1;

      //get name and number
      string name=malloc(100*sizeof(int));
      string number=malloc(100*sizeof(int));
      printf("Name: ");
      scanf("%s",name);

      printf("Number: ");
      scanf("%s",number);

      //print to file
      fprintf(file, "%s, %s\n",name,number);
      fclose(file);

      free(name);
      free(number);
    
}
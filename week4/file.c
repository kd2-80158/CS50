#include<stdio.h>
#include<stdint.h>
//fread - reads data from a file into a buffer -- it takes 4 arguments
//fwrite - writes data from a buffer into a file

int main(int argc, char* argv[])
{
   char* filename = argv[1];
   FILE* f = fopen(filename,"r");
   uint8_t buffer[4];
   fread(buffer,1,4,f);
   for(int i=0;i<4;i++)
   {
    printf("%i\n",buffer[i]);
   }
   fclose(f);
    return 0;
}
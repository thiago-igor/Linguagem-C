/* ferror example: writing error */
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile=fopen("myfile.txt","r");
  if (pFile==NULL) perror ("Error ocorrido:"); // perror : busca no sistema o erro ocorrido
  else {
    fputc ('x',pFile);
    if (ferror (pFile))
      printf ("Error Writing to myfile.txt\n");
    fclose (pFile);
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{


  int *p;
  int cant;
  int i ;
  printf("decime cuantos datos queres: ");
  scanf("%d", &cant);

  //pido memoria
  p = (int *) malloc(cant * sizeof(int));

  if(p!=NULL)
  {
    //cargando datos
    //apunta al bloque de memoria
    for(i = 0 ; i < cant ; i++)
    {
      *(p+i) = i ;
      //p[i] = i ;

    }

    // ... to do

    //procesamiento
    /*
    for(i = 0 ; i < cant ; i++)
    {
      printf("p[%d] = %d\n",i,*(p+i));
    }
    */


    //libere la memoria
    free(p);

  }
  else
  {
    printf("No hay memoria\n");
  }




  return 0;
}
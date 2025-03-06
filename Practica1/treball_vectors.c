/* treball_vectors.c */
/* el programa conté un conjunt de bucles per fer el següent:
- omplir vector1 amb l'index i
- omplir vector2 amb l'index 99-i
- calcular la suma de tot el vector1
- calcular la suma de tot el vector2
- calcular vector3=vector1+vector2
- comprobar que totes les posicions de vector3 valen el mateix */


#include <stdio.h>

#define true 0          /* definicio dels valors booleans */
#define false 1


int main (int argc, char *argv[])
{
int vector1[100], vector2[100], vector3[100], i, suma1, suma2, valor, acabar;

FILE *ftraza;

ftraza=fopen("traza_treball_vectors.prg","w");

/* omplir vector1 amb el valor i */
for (i=0; i<100; i++)
{
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&i);

  vector1[i]=i;
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&vector1[i]); 
}

/* omplir vector2 amb el valor 99-i */
for (i=0; i<100; i++)
{
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&i);

  vector2[i]=99-i;
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&vector2[i]); 
} 

/* Calcular la suma de vector1 */
suma1=0;
fprintf(ftraza,"%d %x\n",3,&suma1);
for (i=0; i<100; i++)
{
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&i);

  suma1=suma1+vector1[i];
  fprintf(ftraza,"%d %x\n",2,&vector1[i]);
  fprintf(ftraza,"%d %x\n",2,&suma1);
  fprintf(ftraza,"%d %x\n",3,&suma1);
} 

/* Calcular la suma de vector2 */
suma2=0;
fprintf(ftraza,"%d %x\n",3,&suma2);
for (i=0; i<100; i++)
{
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&i);

  suma2=suma2+vector2[i];
  fprintf(ftraza,"%d %x\n",2,&vector2[i]);
  fprintf(ftraza,"%d %x\n",2,&suma2);
  fprintf(ftraza,"%d %x\n",3,&suma2);
} 

/* calcular vector3=vector1+vector2 */
for (i=0; i<100; i++)
{
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",3,&i);

  vector3[i]=vector1[i]+vector2[i];
  fprintf(ftraza,"%d %x\n",2,&vector1[i]);
  fprintf(ftraza,"%d %x\n",2,&vector2[i]);
  fprintf(ftraza,"%d %x\n",3,&vector3[i]);
} 



/* comprobar que totes les posicions de vector3 valen el mateix */
valor=vector3[0];
fprintf(ftraza,"%d %x\n",2,&vector3[0]);
fprintf(ftraza,"%d %x\n",3,&valor);
acabar=false;
fprintf(ftraza,"%d %x\n",3,&acabar);
i=1;
fprintf(ftraza,"%d %x\n",3,&i);
while (i<100 && acabar==false)
{
  fprintf(ftraza,"%d %x\n",2,&i);
  fprintf(ftraza,"%d %x\n",2,&acabar);
  fprintf(ftraza,"%d %x\n",2,&vector3[i]);
  fprintf(ftraza,"%d %x\n",2,&valor);
  if (vector3[i]!=valor) 
  {
    acabar=true;
    fprintf(ftraza,"%d %x\n",3,&acabar);
  }

  i++;
  fprintf(ftraza,"%d %x\n",3,&i);
} 

printf("suma1 = %d \n",suma1);
printf("suma2 = %d \n",suma2);
printf("valor = %d \n",valor);

} /* del main */






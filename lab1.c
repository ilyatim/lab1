#include <stdio.h>
#include <stdlib.h>
[eq

void Cel(double C)
{
  if (C<-273.15)  /*check*/
  {
  	printf("does not exist temperature");
  }
  else{
	double F = C * 1.8 + 32 ; /*translation  temperature*/
	double K = C + 273.15 ;
	printf("%.2f C \n",C);
	printf("%.2f F \n",F);
	printf("%.2f K \n",K);
      }
}

void Far(double F)
{
	if (F<-459.7) /*check*/
	{
		printf("does not exist temperature");
	}
	else
		 {
	double C =(F - 32) / 1.8; /*translation  temperature*/
	double K = C + 273.15;
	printf("%.2f F:\n",F);
	printf("%.2f C\n",C);
	printf("%.2f K\n",K);
     }
}
void Kel(double K)
{
	if(K<0) /*check*/
  {
	  printf("does not exist temperature");
  }
	else
	    {
	double C = K - 273.15; /*translation  temperature*/
	double F = C * 1.8 + 32;
	printf("%.2f K:\n",K);
	printf("%.2f C\n",C);
	printf("%.2f F\n",F);
      }
}
int main(int argc, char *argv[])
{
	if (argc == 3){
		if (*argv[2]=='C') {
		Cel(atof(argv[1]));
	} else if (*argv[2] == 'F') {
		Far(atof(argv[1]));
	} else if (*argv[2] == 'K') {
		Kel(atof(argv[1]));
	}
} else {
		Cel(atof(argv[1]));
		Far(atof(argv[1]));
		Kel(atof(argv[1]));
	}
	return(0);
}

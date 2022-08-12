#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mean_variance.h"

int  main(void) //main function begins
{
 
//Uniform random numbers
uniform("uni.dat", 1000000);

//Gaussian random numbers
gaussian("gau.dat", 1000000);

//Mean and variance of uniform
printf("Mean %lf",mean("uni.dat"));

printf("var%lf",var("uni.dat"));

printf("meangauss %lf",mean("gau.dat") );

printf("vargauss %lf",var("gau.dat") );

return 0;
}


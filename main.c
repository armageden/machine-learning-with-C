#include <complex.h>
#include <stdio.h>
#include <stdlib.h>


// this the training data for say...
float train[][2]={
    {1,2},
    {2,4},
    {4,8},
    {5,10}
};

float rand_float(void){
    
   return (float) rand()/(float)RAND_MAX;
}

int main(){
    float w = rand_float();
    printf("%f\n",w);

    return 0;
}
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// this the training data for say...
float train[][2] = {
    {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8},

};

#define train_count (sizeof(train) / sizeof(train[0]))

float rand_float(void) { return (float)rand() / (float)RAND_MAX; }
float cost(float w) {
  float result = 0.0f;

  for (size_t i = 0; i < train_count; i++) {
    float x = train[i][0];
    float y = x * w;
    float d = y - train[i][1];
    result += d * d;
   
  } result /= train_count;
    return result;
}
  int main() {
    // srand(time(0));
    srand(69);
    // c=a*b
    float w = rand_float() * 10.0f;

    // printf("Actual: %f, Expected: %f\n", y, train[i][1]);

    printf("%f\n", cost(w));
    return 0;
  }
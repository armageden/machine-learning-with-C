#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// this is the training data for say...
float train[][2] = {
    {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8},

};

#define train_count (sizeof(train) / sizeof(train[0]))
// random float...
float rand_float(void) { return (float)rand() / (float)RAND_MAX; }

// cost function
float cost(float w, float b) {
  float result = 0.0f;

  for (size_t i = 0; i < train_count; i++) {
    float x = train[i][0];
    float y = x * w + b;
    float d = y - train[i][1];
    result += d * d;
  }
  result /= train_count;
  return result;
}
int main() {
  srand(time(0));
  // srand(69);
  // c=a*b
  float w = rand_float() * 10.0f;
  float b = rand_float() * 5.0f;
  // printf("Actual: %f, Expected: %f\n", y, train[i][1]);
  float eps = 1e-3;
  float rate = 1e-3; // learning rate
  printf("%f\n", cost(w, b));
  for (size_t i = 0; i < 500; ++i) {
    float c = cost(w, b);
    // weight
    float dw = (cost(w + eps, b) - c) / eps;
    // bias
    float db = (cost(w, eps + b) - c) / eps;
    //   printf("%f\n", cost(w));

    w -= rate * dw;
    b -= rate * db;
    printf("cost= %f,w= %f, b=%f\n", cost(w, b), w, b);
  }
  // distance of the cost function
  printf("-----------------------------------------------\n");
  printf("w=%f, b=%f\n", w, b);
  //   printf("%f\n", cost(w - eps));
  //   printf("%f\n", cost(w - eps * 2));
  return 0;
}

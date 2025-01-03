#include <complex.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// sigmoid-funtion
float sigmoidf(float x) { return 1.f / (1.f + expf(-x)); }
// OR-gate
// this is the training data for say...
// float train[][3] = {{0, 0, 0}, {1, 0, 1}, {0, 1, 1}, {1, 1, 1}};

//AND-gate
// float train[][3] = {{0, 0, 0}, {1, 0, 0}, {0, 1, 0}, {1, 1, 1}};

//NAND-gate
float train[][3] = {{0, 0, 1}, {1, 0, 1}, {0, 1, 1}, {1, 1, 0}};

#define train_count (sizeof(train) / sizeof(train[0])) // this is for AND, NAND, OR gates but XOR needs another method using these three methods together...


// cost function
float cost(float w1, float w2, float bias) {
  float result = 0.0f;
  for (size_t i = 0; i < train_count; i++) {
    float x1 = train[i][0];
    float x2 = train[i][1];
    float y = sigmoidf(x1 * w1 + x2 * w2 + bias);
    float d = y - train[i][2];
    result += d * d;
  }
  result /= train_count;
  return result;
}

// random float...
float rand_float(void) { return (float)rand() / (float)RAND_MAX; }
int main(void) {
  srand(time(0));
  float eps = 1e-1;
  float rate = 1e-1;
  float w1 = rand_float();
  float w2 = rand_float();
  float bias = rand_float();

  for (size_t i = 0; i < 1000000; ++i) {

    float c = cost(w1, w2, bias);
    printf("w1 = %f , w2 = %f, bias = %f, c = %f\n", w1, w2, bias, c);
    float dw1 = (cost(w1 + eps, w2, bias) - c) / eps;
    float dw2 = (cost(w1, w2 + eps, bias) - c) / eps;
    float db = (cost(w1, w2, bias + eps) - c) / eps;
    w1 -= rate * dw1;
    w2 -= rate * dw2;
    bias -= rate * db;
  }
  printf("w1 = %f , w2 = %f, bias = %f, c = %f\n", w1, w2,bias, cost(w1, w2, bias));

  for (size_t i = 0; i < 2; ++i) {
    for (size_t j = 0; j < 2; ++j) {
      printf("%zu | %zu = %f\n", i, j, sigmoidf(i * w1 + j * w2+bias));
    }
  }
  return 0;
}
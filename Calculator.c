#include <stdio.h>
float sum(float x, float y) {
   return x + y; 
   }

float difference(float x, float y) {
   return x - y;
    }

float multiplication(float x, float y) { 
  return x * y; 
  }

float division(float x, float y) { 
  return x / y; 
  }

int main() {
      float x;
    float y;
    char operator;
    printf("Enter operator(+ - * /):");
    scanf(" %c", &operator);

    printf("Enter x:");
    scanf("%f", &x);

    printf("Enter y:");
    scanf("%f", &y);

    float add = sum(x, y);
    float subtract = difference(x, y);
    float multiply = multiplication(x, y);
    float divide = division(x, y);

    if (operator== '+') {
      printf("Sum is :%f", add);
    }

    else if (operator== '-') {
      printf("Substraction is: %f", subtract);
    }
    
     else if (operator== '*') {
      printf("Multiplication is:%f", multiply);
    }

    else if (operator== '/') {
      printf("Division is :%f", divide);
    };
  
  
  return 0;
}
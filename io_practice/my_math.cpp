#include "my_math.h"

int exponent(int x, int y){
	int result = x;
	for (int i = 1; i < y; i++) {
		result *= x;
	}
	return result;
}

int factorial(int n){
  int f = 1;
  while(n>1){
    f *= n;
    n--;
  }
  return f;
}
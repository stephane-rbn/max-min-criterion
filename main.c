#include <stdio.h>
#include "prototypes.h"
#include "functions.c"

int main() {
  int firstArray[] = {1, 2, 100};
  int secondArray[] = {20, -30, 40};
  int arraySize;

  arraySize = 3;

  printf("Maximum value in {1, 2, 100}: %d\n", max(firstArray, arraySize));
  printf("Mininum value in {20, -30, 40}: %d\n", min(secondArray, arraySize));

  return 0;
}

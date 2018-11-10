#include "prototypes.h"

int min(int* array, int arrayLength) {
    int minValue;
    int i;

    minValue = array[0];

    for (i = 1; i < arrayLength; i++) {
        if (minValue > array[i]) {
            minValue = array[i];
        }
    }

    return minValue;
}

int max(int* array, int arrayLength) {
    int maxValue;
    int i;

    maxValue = array[0];

    for (i = 1; i < arrayLength; i++) {
        if (maxValue < array[i]) {
            maxValue = array[i];
        }
    }

    return maxValue;
}

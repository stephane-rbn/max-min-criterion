#include <criterion/criterion.h>
#include "prototypes.h"
#include "functions.c"

Test(minFunctionTests, mininum_should_be_minus_110) {
    int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
    cr_assert_eq(min(array1, 7), -110);
}

Test(minFunctionTests, mininum_should_be_0) {
    int array2[5] = {42, 54, 65, 87, 0};
    cr_assert_eq(min(array2, 5), 0);
}

Test(maxFunctionTests, maximum_should_be_566) {
    int array3[8] = {4,6,2,1,9,63,-134,566};
    cr_assert_eq(max(array3, 8), 566);
}

Test(maxFunctionTests, maximum_should_be_5) {
    int array4[1] = {5};
    cr_assert_eq(max(array4, 1), 5);
}

Test(maxFunctionTests, maximum_should_be_56) {
    int array5[7] = {-52, 56, 30, 29, -54, 0, -110};
    cr_assert_eq(max(array5, 7), 56);
}

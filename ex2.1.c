#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Char ranges
    printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char: 0 to %u\n", UCHAR_MAX);

    // Short ranges
    printf("Range of signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short: 0 to %u\n", USHRT_MAX);
    

    // Int ranges
    printf("Range of signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);

    // Long ranges
    printf("Range of signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: 0 to %lu\n", ULONG_MAX);

    // Floating-point ranges
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}






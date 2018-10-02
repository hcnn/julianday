#include <stdio.h>  // printf
#include <assert.h>
#include "julianday.h"

int main()
{
    int y, m, d;

    // 24-Nov (-4713) 12Uhr
    jd_to_date(0, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == -4713);
    assert(m == 11);
    assert(d == 24);

    // 25-Nov (-4713) 12Uhr
    jd_to_date(1, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == -4713);
    assert(m == 11);
    assert(d == 25);

    // 11-Feb-2014 12Uhr, 2456700
    jd_to_date(2456700, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == 2014);
    assert(m == 2);
    assert(d == 11);

    // 27-Feb-6700 12Uhr, 4168242
    jd_to_date(4168242, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == 6700);
    assert(m == 2);
    assert(d == 27);

    // 28-Feb-6700 12Uhr, 4168243
    jd_to_date(4168243, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == 6700);
    assert(m == 2);
    assert(d == 28);

    // 01-Mar-6700 12Uhr, 4168244
    jd_to_date(4168244, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == 6700);
    assert(m == 3);
    assert(d == 1);

    // 02-Mar-6700 12Uhr, 4168245
    jd_to_date(4168245, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);
    assert(y == 6700);
    assert(m == 3);
    assert(d == 2);
}

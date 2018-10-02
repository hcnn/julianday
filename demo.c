#include <stdio.h>  // printf
#include "julianday.h"

int main()
{
    int jdn = date_to_jd(2018, 10, 2);
    printf("Julian Day Numbers: %d\n", jdn);

    int y, m, d;
    jd_to_date(jdn, &y, &m, &d);
    printf("Date: %04d-%02d-%02d\n", y, m, d);

	return 0;
}

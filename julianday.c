#include "julianday.h"


int date_to_jd(int year, int month, int day) {
    int a = ((14 - month) / 12); 
    int y = (year + 4800 - a); 
    int m = (month + (12 * a) - 3); 
    return (day + (((153*m)+2)/5) + (y*365) + (y/4) - (y/100) + (y/400) - 32045);
}


void jd_to_date(int jd, int *year, int *month, int *day){
    int a = jd + 32044;
    int b = (((4 * a) + 3) / 146097);
    int c = a - ((b * 146097) / 4);

    int d = (((4 * c) + 3) / 1461);
    int e = c - ((d * 1461) / 4);
    int m = (((5 * e) + 2) / 153);
    int m2= (m / 10);
    
    day[0]   =  (e + 1 - (((153 * m) + 2) / 5));
    month[0] =  (m + 3 - (12 * m2));
    year[0]  =  ((b*100) + d - 4800 + m2);
}

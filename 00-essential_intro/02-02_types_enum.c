#include <stdio.h>

int main(void)
{
    enum week { sun, mon, tue, wed, thu, fri, sat}; /* enum declaration */
    enum cardinal_points {nort = 0, east = 90, south = 180, west = 270};
    enum months { juan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

    enum week day; /* instantiation */
    day = fri; /* operation */
    printf("%d\n", day);
    printf("%s\n", day);
    return(0);
}
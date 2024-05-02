#include <stdio.h>

void main() {
    int dvnd, dvsr, i=1;
    scanf("%i %i", &dvnd, &dvsr);
    int tnd = dvnd, tsr = dvsr;
    if(dvnd<0) tnd = (tnd - dvnd) - dvnd;
    if(dvsr<0) tsr = (tsr - dvsr) - dvsr;
    int s = tsr;
    while(s<tnd) {
        s += tsr;
        i++;
        if((s+tsr)>tnd) break;
    }
    if(dvnd<0 || dvsr<0) i = 0-i;
    printf("%i", i);
}

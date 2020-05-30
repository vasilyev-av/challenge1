#include <stdio.h>

void challengePrint(int start, int end);

void main() {
    challengePrint(0,1000);
}

void challengePrint(int start, int end) {
    printf("%d\n",start);
    int stop = 1/(end-start);
    challengePrint(++start,end);
}

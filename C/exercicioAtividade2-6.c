#include <stdio.h>
int main() {
int i= 20;
int j= 12;
double x = 7.0;
double y = 6.0;
int result;
result= ! ( x + 4.0) +!!y+!!!i+!!i+12;
printf( "%d\n" ,! ( x + 4.0));
printf( "%d\n" ,!!y);
printf( "%d\n" ,!!i);
printf( "%d\n" ,!!!i);
printf( "%d" ,result);
}

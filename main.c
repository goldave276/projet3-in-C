#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int N=10, P=5, Q=10, R;
char C='S';
N = 5; P = 2;
Q = N++ > P || P++ != 3;
printf ("C : N=%d P=%d Q=%d\n", N, P, Q);
N = 5; P = 2;
Q = N++ < P || P++ != 3;
printf ("D : N=%d P=%d Q=%d\n", N, P, Q);
N = 5; P = 2;
Q = ++N == 3 && ++P == 3;
printf ("E : N=%d P=%d Q=%d\n", N, P, Q);
N=5; P=2;
Q = ++N == 6 && ++P == 3;
printf ("F : N=%d P=%d Q=%d\n", N, P, Q);
N=C;
printf ("G : %c %c\n", C, N);
printf ("H : %d %d\n", C, N);
printf ("I : %x %x\n", C, N);
    return 0;
}

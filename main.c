#include <stdio.h>

int main() {
    int ile_a, ile_b, ile_xy, nieznany;
    char zn;

    switch (zn)
    {
        case 'a': ++ile_a; break;
        case 'b': ++ile_b; break;
        case 'x':
        case 'y': ++ile_xy; break;
        default: ++nieznany;
    }

    printf("Wyświetl a: \n");
    scanf("%lf", ile_a);
    printf("Wyświetl b: \n");
    scanf("%lf", &ile_b);
    printf("Wyświetl xy: \n");
    scanf("%lf", &ile_xy);
    printf("Wyświetl a: \n");
    scanf("%lf", &nieznany);
    return 0;
}
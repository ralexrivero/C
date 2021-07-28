#include <stdio.h>
#include <string.h>
struct cuenta {
    char nombre[30];
    char apellido[40];
    int identificador;
    int saldo;
};
struct specificators {
    char marcador[1];
    char prototype[3];
};

int main(void)
{
struct cuenta cuentaUno;
cuentaUno.saldo = 400;

    struct specificators marcador = {
        {"a", 2},
        {"b", 3},
        {"c", 4},
        {"a", 2},
        {"b", 3},
        {"c", 4},
    };

int size = sizeof(array) / sizeof(array[0][0]);

printf("%d", size);
return (0);
}
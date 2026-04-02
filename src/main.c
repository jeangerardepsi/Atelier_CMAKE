#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/calculator.h"

int main(int argc, char *argv[]){
    if (argc >= 3) // On accepte 3 arguments (car) ou 4 (add, sub...)
    {
        char* op = argv[1];
        char* a = argv[2];
        double r = 0;

        if (strcmp(op, "add") == 0 && argc == 4) {
            char* b = argv[3];
            r = _add(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0 && argc == 4) {
            char* b = argv[3];
            r = _sub(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0 && argc == 4) {
            char* b = argv[3];
            r = _mul(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0 && argc == 4) {
            char* b = argv[3];
            r = _div(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "car") == 0) { // Nouvelle fonction !
            r = _car(atof(a));
            printf("%lf", r);
        }
        else {
            printf("Erreur de parametres");
        }
    }
    else {
        printf("Erreur de parametres");
    }
    return 0;
}

#include <stdio.h>

//Estructuras
struct racionales
{
    int numerador;
    int denominador;
};

//prototipos
struct racionales leerRacional(); //Funciones que retornan una estructura
void imprimirResultado(struct racionales resul); //Funciones que reciben una estructura como parametro
struct racionales sumarRacionales(struct racionales racio1, struct racionales racio2);
struct racionales restarRacionales(struct racionales racio1, struct racionales racio2);
struct racionales multiplarRacionales(struct racionales racio1, struct racionales racio2);
struct racionales dividirRacionales(struct racionales racio1, struct racionales racio2);


int main()
{
    //Generamos las variables de la estructura
    struct racionales r1,r2;

    //Asignamos los datos a las estructuras
    r1 = leerRacional();
    r2 = leerRacional();

    imprimirResultado(sumarRacionales(r1, r2));
    imprimirResultado(restarRacionales(r1, r2));
    imprimirResultado(multiplarRacionales(r1, r2));
    imprimirResultado(dividirRacionales(r1, r2));
    return 0;
}
 
struct racionales leerRacional(){
    //Creamos una estructura local
    struct racionales racional;

    //Leemos y asignamos datos a la estructura local
    scanf("%d", &racional.numerador);
    scanf("%d", &racional.denominador);

    return racional;
}

void imprimirResultado(struct racionales resul){
    printf("%d/%d \n", resul.numerador, resul.denominador);
}
struct racionales sumarRacionales(struct racionales racio1, struct racionales racio2){
    //Estructura para colocar los resultados
    struct racionales resultado;

    //Calculamos  y asignamos el numerador y el denominador a la estructura
    resultado.numerador = (racio1.numerador * racio2.denominador) + (racio2.numerador * racio1.denominador);
    resultado.denominador = racio1.denominador * racio2.denominador;

    return resultado;
}

struct racionales restarRacionales(struct racionales racio1, struct racionales racio2){
    //Estructura para colocar los resultados
    struct racionales resultado;

    //Calculamos  y asignamos el numerador y el denominador a la estructura
    resultado.numerador = (racio1.numerador * racio2.denominador) - (racio2.numerador * racio1.denominador);
    resultado.denominador = racio1.denominador * racio2.denominador;

    return resultado;
}

struct racionales multiplarRacionales(struct racionales racio1, struct racionales racio2){
    //Estructura para colocar los resultados
    struct racionales resultado;

    //Calculamos  y asignamos el numerador y el denominador a la estructura
    resultado.numerador = racio1.numerador * racio2.numerador;
    resultado.denominador = racio1.denominador * racio2.denominador;

    return resultado;
}

struct racionales dividirRacionales(struct racionales racio1, struct racionales racio2){
     //Estructura para colocar los resultados
    struct racionales resultado;

    //Calculamos  y asignamos el numerador y el denominador a la estructura
    resultado.numerador = racio1.numerador * racio2.denominador;
    resultado.denominador = racio1.denominador * racio2.numerador;

    return resultado;
}


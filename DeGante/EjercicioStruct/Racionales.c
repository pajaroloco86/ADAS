#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 2

struct racional{
  int numerador;
  int denominador;
}r1,r2,r3;

void leerRacional(racional *r1);
void leerRacional2(racional *r2);
racional SumarRacionales(racional r1, racional r2);
racional RestarRacionales(racional r1, racional r2);
racional MultiplicarRacionales(racional r1, racional r2);
racional DivisionRacionales(racional r1, racional r2);
void Simplificar(racional r1, racional r2);
void ImprimirRacionales(racional *r3);

int main(){

	struct racional r1, r2, r3;
	leerRaciona(&r1);
	leerRacional(&r2);
	
	imprimirRacionales(SumarRacionales(r1,r2));
	imprimirRacionales(RestarRacionales(r1,r2));
	imprimirRacionales(MultiplicarRacionales(r1,r2));
	imprimirRacionales(DivisionRacionales(r1,r2));

    return 0;
    
}
	
void leerRacional(struct racional r1){
	
	do{
		printf("Introduzca el numerador y denominador de la primera fraccion");
		scanf("%d",&r1.numerador);
		scanf("%d",&r1.denominador);
	}while(r1.denominador == 0);
}

racional SumarRacionales(struct racional r1,struct racional r2){
    racional r3;
    if( r1.denominador == r2.denominador){
        r3.numerador = r1.numerador + r2.numerador;
        r3.denominador = r1.denominador
    }else{
        r3.numerador = (r1.numerador*r2.denominador) + (r2.numerador*r1.denomminador);
        r3.denominador = r1.denominador*r2.denominador;
    }
	
	return r3;
}

racional RestarRacionales(struct racional r1,struct racional r2){
    racional r3;
	if( r1.denominador == r2.denominador){
		r3.numerador = r1.numerador - r2.numerador;
		r3.denominador = r1.denominador
	}else{
		r3.numerador = (r1.numerador*r2.denominador) - (r2.numerador*r1.denomminador);
		r3.denominador = r1.denominador*r2.denominador;
	}
	
	return r3;
}

racional MultiplicarRacionales(struct racional r1,struct racional r2){
    racional r3;
    r3.numerador = r1.numerador*r2.numerador;
    r3.denominador = r1.denominador*r2.denominador;
	
	return r3;
}

racional DivisionRacionales(struct racional r1,struct racional r2){
    racional r3;
    r3.numerador = r1.numerador*r2.denominador;
    r3.denominador = r1.denominador*r2.numerador;
	
	return r3;
}

void Simplificar(struct racional r3){
	int i;
    if(r3.numerador>r3.denominador){
        r3.denominador=menor;
    }else(r3.denominador>r3.numerador){
		r3.numerador=menor
    }

    for(i=menor;i<=0;i--){
        if(r3.numerador%i == 0 && r3.denominador%i == 0){
			r3.numerador=r3.numerador/i;
			r3.denominador=r3.denominador/i:
        }  
    }
	
	return r3;
}
	
void ImprimirRacionales(struct racional r3){
	
	simplificar(r3);
	printf("%d,%d", r3.numerador,r3.denominador);
}

#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdio_h
#endif

typedef struct Tipo_Cola{
	int capacidad;
	int final;
	char *elementos;
}Cola


typedef  struct tipo_cola{
    int Espacio;
    int fin;
    int *elementos;
} Cola;


Cola *creaCola(int NuevoEspacio )
{
    Cola *tmp;
    tmp = malloc(sizeof(Cola));
    tmp->Espacio = NuevoEspacio;
    tmp->fin = -1;
    tmp->elementos = malloc(tmp->Espacio*sizeof(char));
    return (tmp);
}



int esVaciaCola(Cola *cola){
    // Asume que cola fue inicializada
    if (cola->fin == -1) {
        return (1);
    }else{
        return (0);
    }
}

int llegada(Cola *cola, int Nuevoelemento)
{
    if((cola->fin+1) == cola->capacidad)
	{
	
	return(-1); 
    }
    {
    cola->fin++;
    cola->elementos[cola->fin] = NuevoElemento;
    return(1);
	}
}

int atencion(Cola *cola)
{
    if(esVaciaCola(cola)) 
	{
	return (-1);
    }
    char NewElemento = cola->elementos[0];
    //se mueven los elementos restantes
    for (int i=0; i<cola->fin; i++)
	{
        cola->elementos[i] = cola->elementos[i+1];
    }
    {
    cola->fin--;
    return(NewElemento);
    }
}

void vacia(Cola *cola)
{
    while(!esVaciaCola(cola))
        atencion(cola);
}

void eliminaCola(Cola *cola){
    free(cola->elementos);
    free(cola);
}

void recorreCola(Cola *cola){
    printf("INICIO COLA ESTATICA\n");
    printf("Tamaño cola = %d\n", cola->fin+1);
    for(int i = 0; i<=cola->fin; i++){
        printf(" Lista[%d] = %d\n ", i, cola->elementos[i]);
    }
    printf("FIN COLA\n\n");
}

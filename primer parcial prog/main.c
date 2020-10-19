typedef struct
{
    int id;
    char nombre[21];
    int infectados;
    int recuperados;
    int muertos;
} ePais;
void mostrarPais(ePais pais);
void actualizarRecuperados(ePais pais,int recuperadoDia);


int main()
{
    ePais pais {100,"argentina",1000,500,10};

    actualizarRecuperados(pais,100);
    mostrarPais(pais);


    invertirCadena("Karen");
    return 0;
}
void mostrarPais(ePais pais)
{
    printf("  ID       Nombre   Infectados Recuperados Muertos  \n");
    printf(" %d    %10s    %d %d %d\n", pais.id, pais.nombre, pais.infectados, pais.recuperados, pais.muertos);
    printf("\n");
}

void actualizarRecuperados(ePais pais,int recuperadoDia)
{
    pais.infectados = pais.infectados-recuperadoDia;
    pais.recuperados+= recuperadoDia;
}

//----2


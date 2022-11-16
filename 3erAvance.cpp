#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include <fstream>
#include<stdlib.h>

using namespace std;

int* numart, registros, idarticulo, busqueda;
float* subtotal, * iva, * total;
string* proveedor, * fecha, * nombre, * clas, * car, * des, * genero;

void alta();
void modify();
void lista();
void archivo();
void eliminar();




int main()
{
    int opcion;
    printf("\t ***GAME UNIVERSE*** \n");
    printf(" 1.-Agregar articulo \n 2.-Modificar articulo\n 3.-Lista de articulos \n 4.-Eliminar articulo \n 5.-Limpiar pantalla \n 6.-Salir \n");
    scanf_s("%d", &opcion);
    system("cls");

    switch (opcion)
    {
    case 1:
        alta();
        system("pause");
        system("cls");
        return main();
        break;

    case 2:
        modify();
        system("pause");
        system("cls");
        return main();
        break;

    case 3:
        lista();
        system("pause");
        system("cls");
        return main();
        break;

    case 4:
        eliminar();
        system("cls");
        return main();
        break;

    case 5:
        system("cls");
        return main();
        break;

    case 6:
        archivo();
        exit(1);
        break;

    default:
        printf("ingrese una opcion correcta \n");
        system("pause");
        system("cls");
        return main();
        break;
    }
}


void alta()
{

    printf("¿Cuantos registros desea dar de alta? \n");
    scanf_s("%d", &registros);

    numart = new int[registros];
    proveedor = new string[registros];
    subtotal = new float[registros];
    iva = new float[registros];
    total = new float[registros];

    for (int i = 0; i < registros; i++)
    {
        idarticulo = 20220000 + i;
        printf("ID Articulo: %d \n", idarticulo);
        int salida = 1;
        do
        {
        printf("ingrese el numero del articulo \n");
        scanf_s("%d", &numart[i]);
        if (numart[i] == numart[i - 1] || numart[i] == numart[i - 2])
        {
            printf("el numero del articulo ya existe \n");
        }
        else
        {
            salida = 2;
        }
    } while (salida == 1);
    do
    {
        printf("ingrese de nuevo el numero del articulo \n");
        scanf_s("%d", &numart[i]);
    } while (numart[i] == numart[i - 1] || numart[i] == numart[i-2]);
        printf("ingrese el nombre del videojuego \n");
        cin.ignore();
        getline(cin, nombre);
        printf("ingrese la clasificacion del videojuego\n");
        getline(cin, clas);
        printf("ingrese las caracteristicas del videojuego\n");
        cin.ignore();
        getline(cin, car);
        printf("ingrese la descripcion del videojuego\n");
        cin.ignore();
        getline(cin, des);
        printf("ingrese el genero del videojuego\n");
        cin.ignore();
        getline(cin, genero);
        printf("ingrese el subtotal \n ");
        scanf_s("%f", &subtotal[i]);
        iva[i] = subtotal[i] * .16;
        total[i] = subtotal[i] + iva[i];

        if ((registros - 1) == i)
        {
            int desicion;
            printf("¿Desea dar de alta otro registro? \n");
            printf("1.-Si\n 2.-No\n");
            scanf_s("%d", &desicion);
            if (desicion == 1)
            {
                registros = registros + 1;
            }
            else
            {
                system("cls");
            }
        }
    }


}

void modify()
{
    int modify;
    int opc1;
    int opc2 = 1;
    do
    {
        printf("Ingrese el numero de articulo a modificar\n");
        scanf_s("%d", &modify);
    } while (modify <= 0);

    for (int i = 0; i < registros; i++)
    {
        if (modify == item[i])
        {
            printf("\tQue desea modificar?\n");
            printf("1.-Todo\n2.-Fecha\n3.-Nombre\n4.-Clasificacion\n5.-Caracteristicas\n6.-Genero\n7.-Descripcion\n8.-Precio\n9.-Volver al menu\n", 134);
            scanf_s("%d", &opc1);
            switch (opc1)
            {
            case 1:
                printf("Ingrese la nueva fecha\n", 164);
                scanf_s("%d", fecha);
                printf("Ingrese el nuevo nombre\n");
                cin.ignore();
                getline(cin, nombre[i]);
                printf("Ingrese la nueva clasificacion\n");
                getline(cin, clas[i]);
                printf("Ingrese las nuevas caracteristicas\n");
                getline(cin, car[i]);
                printf("Ingrese el nuevo genero\n");
                getline(cin, genero[i]);
                printf("Ingrese la nueva descripcion\n");
                getline(cin, des[i]);
                printf("Ingrese el nuevo subtotal \n");
                scanf_s("%f", &subtotal[i]);
                iva[i] = precio[i] * .16;
                total[i] = precio[i] + iva[i];
                break;
            case 2:
                printf("Ingrese la nueva fecha\n", 164);
                scanf_s("%d", fecha);
                break;
            case 3:
                printf("Ingrese el nuevo nombre\n");
                cin.ignore();
                getline(cin, nombre[i]);
                break;
            case 4:
                printf("Ingrese la nueva clasificacion\n");
                getline(cin, clas[i]);
                break;
            case 5:
                printf("Ingrese las nuevas caracteristicas\n");
                getline(cin, car[i]);
                break;
            case 6:
                printf("Ingrese el nuevo genero\n");
                getline(cin, genero[i]);
                break;
            case 7:
                printf("Ingrese la nueva descripcion\n");
                getline(cin, des[i]);
            case 8:
                printf("Ingrese el nuevo subtotal\n");
                scanf_s("%f", &subtotal[i]);
                iva[i] = precio[i] * .16;
                total[i] = precio[i] + iva[i];
                break;
            case 9:
                break;
            default:
                printf("Ingrese una opcion valida...\n");
                break;
                system("cls");
                return modificar();
            }
        }
    }
}

void lista()
{
    int opc2;
    printf("1.- Numero de articulo \n 2.-Listas Vigentes\n");
    scanf_s("%d", &opc2);
    if (opc2 == 1)
    {
        printf("ingrese el numero del articulo");
        scanf_s("%d", &busqueda);

        for (int i = 0; i < registros; i++)
        {
            if (busqueda == numart[i])
            {
                printf("ID ARTICULO: %d \n", idarticulo[i]);
                printf("Numero de articulo: %d \n", numart[i]);
                printf("Nombre del videojuego: %s\n", nombre[i]);
                printf("Clasificacion del videojuego: %s\n", clas[i]);
                printf("Caracteristicas del videojuego: %s\n", car[i]);
                printf("Descripcion del videojuego: %s\n", des[i]);
                printf("Genero del videojuego: %s\n", genero[i];
                printf("subtotal: %f \n", subtotal[i]);
                printf("iva: %f \n", iva[i]);
                printf("total: %f \n", total[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i < registros; i++)
        {
            if (numart[i] != 0)
            {
                printf("ID Articulo: %d \n", idarticulo);
                printf("Numero de articulo: %d \n", numart);
                printf("Nombre %s", nombre[i]);
                printf("Subtotal: %f \n", subtotal);
                printf("Iva: %f \n", iva);
                printf("Total: %f \n", total);
            }
        }
    }
    system("pause");
    system("cls");
}

void archivo()
{
    ofstream archivo;
    string nombrearchivo;

    printf("Igrese el nombre del archivo\n");
    getline(cin, nombrearchivo);

    archivo.open(nombrearchivo.c_str(), ios::out);

    if (archivo.fail())
    {
        printf("ERROR, NO SE PUDO CREAR EL ARCHIVO");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < registros; i++)
    {
        archivo << idarticulo[i] << "\t" << "\t";
        archivo << numart[i] << "\t" << "\t";
        archivo << nombre[i] << "\t" << "\t";
        archivo << clas[i] << "\t" << "\t";
        archivo << car[i] << "\t" << "\t";
        archivo << des[i] << "\t" << "\t";
        archivo << genero[i] << "\t" << "\t";
        archivo << subtotal[i] << "\t" << "\t";
        archivo << iva[i] << "\t" << "\t";
        archivo << total[i] << "\t" << "\n";
    }
    archivo.close();
}

void eliminar()
{
    delete numart;
    system("cls");
    return main();
}
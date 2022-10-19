#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>


using namespace std;

struct tienda
{
	//declaracion de variable

	int idart, numart;
	string nombre, genero, car, clas, des;
	float subtotal, iva, total;
};


int main()
{
	tienda compras[3];
	int opcion, busqueda;

	do
	{
		printf("\t ***GAME UNIVERSE*** \n");
		printf(" 1.-Agregar articulo \n 2.-Modificar articulo\n 3.-Lista de articulos \n 4.-Eliminar articulo \n 5.-Limpiar pantalla \n 6.-Salir \n");
		scanf_s("%d", &opcion);
		system("cls");

		switch (opcion)
		{
		case 1: //Agregar un articulo
			for (int i = 0; i < 3; i++)
			{
				compras[i].idart = 20220000 + i;
				printf("ID Articulo: %d \n", compras[i].idart);
				int salida = 1;
				do
				{
					printf("ingrese el numero del articulo \n");
					scanf_s("%d", &compras[i].numart);
					if (compras[i].numart == compras[i - 1].numart || compras[i].numart == compras[i - 2].numart)
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
					scanf_s("%d", &compras[i].numart);					
				}while (compras[i].numart == compras[i - 1].numart || compras[i].numart == compras[i - 2].numart);

				printf("ingrese el nombre del videojuego \n");
				cin.ignore();
				getline(cin, compras[i].nombre);
				printf("ingrese la clasificacion del videojuego\n");
				getline(cin, compras[i].clas);
				printf("ingrese las caracteristicas del videojuego\n");
				cin.ignore();
				getline(cin, compras[i].car);
				printf("ingrese la descripcion del videojuego\n");
				cin.ignore();
				getline(cin, compras[i].des);
				printf("ingrese el genero del videojuego\n");
				cin.ignore();
				getline(cin, compras[i].genero);
				printf("ingrese el subtotal \n");
				scanf_s("%f", &compras[i].subtotal);
				compras[i].iva = compras[i].subtotal * .16;
				compras[i].total = compras[i].subtotal + compras[i].iva;
				system("cls");
			}
			break;

		case 2: //Modificar un articulo
			printf("...\n");
			system("pause");
			system("cls");
			break;

		case 3: //lista de articulos
			int opc2;
			printf("1.- Numero de articulo \n 2.-Listas Vigentes\n");
			scanf_s("%d", &opc2);
			if (opc2 == 1)
			{
				printf("ingrese el numero del articulo");
				scanf_s("%d", &busqueda);

				for (int i = 0; i < 3; i++)
				{
					if (busqueda == compras[i].numart)
					{
						printf("ID ARTICULO: %d \n", compras[i].idart);
						printf("Numero de articulo: %d \n", compras[i].numart);
						printf("Nombre del videojuego: %s\n", compras[i].nombre.c_str());
						printf("Clasificacion del videojuego: %s\n", compras[i].clas.c_str());
						printf("Caracteristicas del videojuego: %s\n", compras[i].car.c_str());
						printf("Descripcion del videojuego: %s\n", compras[i].des.c_str());
						printf("Genero del videojuego: %s\n", compras[i].genero.c_str());
						printf("subtotal: %f \n", compras[i].subtotal);
						printf("iva: %f \n", compras[i].iva);
						printf("total: %f \n", compras[i].total);
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (compras[i].numart != 0)
					{
						printf("ID Articulo: %d \n", compras[i].idart);
						printf("Numero de articulo: %d \n", compras[i].numart);
						printf("Nombre %s", compras[i].nombre.c_str());
						printf("Subtotal: %f \n", compras[i].subtotal);
						printf("Iva: %f \n", compras[i].iva);
						printf("Total: %f \n", compras[i].total);
					}
				}
			}
			system ("pause");
			system("cls");
			break;

		case 4://Eliminar Articulo
			printf("ingrese el numero del articulo\n");
			scanf_s("%d", &busqueda);

			for (int i = 0; i < 3; i++)
			{
				if (busqueda == compras[i].numart)
				{
					compras[i].numart = 0;
				}
			}
			system("cls");
			break;

		case 5: //Limpiar Pantalla
			system("cls");
			break;
		case 6: //Salir
			printf("saliendo... \n");
			system("pause");
			system("cls");
			break;
		default:
			printf("intente denuevo... \n");
			system("pause");
			system("cls");
			break;
		}
	} while (opcion != 5);
	system("pause");
}
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
    int numar, opc, precio_unitario;
    float impuesto, total;
    string articulo, clasificacion, descripcion, caracteristicas, genero, fechal;

    cout << "\t ***GAMER UNIVERSE*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;

    switch (opc)
    {
    case 1: //Agrega un articulo
        cout << "Ingrese el numero del articulo \n";
        cin >> numar;
        cout << "Ingrese el nombre del videojuego\n";
        cin.ignore();//Ignora el primer espacio 
        getline(cin, articulo); //Permite usar espacios
        cout << "Ingrese la fecha de lanzamiento del videojuego\n";
        cin.ignore();
        getline(cin, fechal);
        cout << "Ingrese la clasificacion del videojuego\n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "Ingrese las caracteristicas del videojuego\n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout << "Ingrese el descripcion del videojuego\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Ingrese el genero del videojuego\n";
        cin.ignore();
        getline(cin, genero);
        cout << "Ingrese el precio unitario del videojuego\n";
        cin >> precio_unitario;
        impuesto = 0.16;
        total = precio_unitario * impuesto;
        cout << "El total a pagar es:" << total << endl;
        return main();
        break;

    case 2: //Modifica un articulo
        break;

    case 3://Elimina un articulo
        break;

    case 4: //Lista de Articulos Vigentes
        break;

    case 5: //Limpia la pantalla
        system("cls"); //clean LIMPIA LA PANTALLA
        return main();// regresa al inicio del programa
        break;

    case 6: //Salir
        cout << "Gracias por utilizar la tienda de videojuegos \n";
        break;

    default:
        cout << "Ingrese una opcion correcta \n";
        return main();

    }

}

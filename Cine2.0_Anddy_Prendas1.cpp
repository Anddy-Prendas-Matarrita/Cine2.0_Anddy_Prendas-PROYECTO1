// Cine2.0_Anddy_Prendas1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Movie.h"

int main() {
	Movie movie1("Kung Fu Chamba: La Leyenda del Chambeador", 2023, 110, "China", "La película ofrece una mezcla refrescante de humor y artes marciales, logrando un equilibrio perfecto entre acción y comedia. La actuación de Mario Gómez como Miguel es entrañable; su transformación de un humilde trabajador a un héroe experto en Kung Fu es tanto hilarante como inspiradora. Ana Rodríguez, interpretando a Rosa, la astuta dueña del restaurante local, aporta una química romántica que complementa la trama sin desviarse de la acción principal.");
	Movie movie2("Rapidos y Crikosos 11", 2024, 118, "Estados Unidos", "La undécima entrega de la serie Rápidos y Crikosos continúa la tradición de combinar espectaculares escenas de persecución con un humor desenfadado. La dirección de Roberto Mendoza logra mantener el equilibrio entre la acción trepidante y los momentos cómicos, creando una experiencia cinematográfica entretenida y dinámica.");
	Movie movie3("El Vicio Intenso 2", 2024, 104, "Estados Unidos", "El Vicio Intenso 2 profundiza en la psicología de sus personajes, mostrando cómo los viejos hábitos y los traumas no resueltos pueden resurgir en los momentos más inesperados.Santiago Villalobos ofrece una dirección firme, explorando el dolor y la lucha interna de sus personajes con una crudeza que se siente auténtica y devastadora.");
	Movie movie4("Negranieves y Los 7 Esclavitos", 2019, 129, "Mexico", "La película aborda temas contemporáneos como la discriminación, el poder y la resistencia a través de una lente de comedia negra y fantasía. La dirección de Ricardo Márquez es atrevida, utilizando el humor y la sátira para hacer una crítica incisiva de la sociedad actual.");
	
	int infiniteWhileVariable = 1;
	while (infiniteWhileVariable == 1) {

		char optionMenu;
		std::cout << "\nBienvenidos al sistema de compra de tickets de Anddy s Cinema\n\n";
		std::cout << "a. Archivo\n";
		std::cout << "b. Mantenimiento\n";
		std::cout << "c. Reserva\n";
		std::cout << "d. Venta\n";
		std::cout << "Opcion: ";
		std::cin >> optionMenu;
		std::cout << "\n";

		if (optionMenu == 'a') {
			system("cls");
			int menuVariable1 = 1;
			while (menuVariable1 == 1) {
				char optionMenu1;
				std::cout << "\na. Acerca de\n";
				std::cout << "b. Salir\n";
				std::cout << "Opcion: ";
				std::cin >> optionMenu1;

				if (optionMenu1 == 'a') {
					system("cls");
					std::cout << "\nAnddy Elih Prendas Matarrita\nEstudiante apasionado por la programacion y fundador Anddy s Cinema en 2024\n";
				}
				else if (optionMenu1 == 'b') {
					system("cls");
					menuVariable1 = 0;
					std::cout << "Has salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'b') {
			system("cls");
			int menuVariable2 = 1;
			while (menuVariable2 == 1) {
				char optionMenu2;
				std::cout << "\na. Peliculas\n";
				std::cout << "b. Salas\n";
				std::cout << "c. Horarios\n";
				std::cout << "d. Salir\n";
				std::cout << "Opcion: ";
				std::cin >> optionMenu2;

				if (optionMenu2 == 'a') {
					system("cls");
				}
				else if (optionMenu2 == 'b') {
					system("cls");
				}
				else if (optionMenu2 == 'c') {
					system("cls");
				}
				else if (optionMenu2 == 'd') {
					system("cls");
					menuVariable2 = 0;
					std::cout << "\nHas salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'c') {
			system("cls");
			int menuVariable3 = 1;
			while (menuVariable3 == 1) {
				char optionMenu3;
				std::cout << "\na. Peliculas";
				std::cout << "\nb. Salir";
				std::cout << "\nOpcion: ";
				std::cin >> optionMenu3;
				if (optionMenu3 == 'a') {
					system("cls");
				}
				else if (optionMenu3 == 'b') {
					system("cls");
					menuVariable3 = 0;
					std::cout << "\nHas salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else if (optionMenu == 'd') {
			system("cls");
			int menuVariable4 = 1;
			while (menuVariable4 == 1) {
				char optionMenu4;
				std::cout << "\na. Peliculas";
				std::cout << "\nb. Salir";
				std::cout << "\nOpcion: ";
				std::cin >> optionMenu4;
				if (optionMenu4 == 'a') {
					system("cls");
				}
				else if (optionMenu4 == 'b') {
					system("cls");
					menuVariable4 = 0;
					std::cout << "\nHas salido";
				}
				else {
					system("cls");
					std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
				}
			}
		}
		else {
			system("cls");
			std::cout << "Opcion no valida, vuelva a intentarlo con otra opcion\n";
		}
	}
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <array>

int main() {
	std::ofstream archivo;
	
	archivo.open("datos.csv");

	archivo << "a;b;c;\n";
	archivo << "d;e;f;\n";
	archivo << "1;2;3.456;\n";

	archivo.close();

	return 0;



	/*std::ifstream ip("../ProjectM06_UF1/personas.csv");

	if (!ip.is_open()) {
		std::cout << "ERROR: Error al abrir el archivo" << "\n";
		return 1;
	}

	std::string nombre;
	std::string apellido;
	std::string	edad;
	std::string peso;

	while (ip.good()) {
		std::getline(ip, nombre, ';');
		std::getline(ip, apellido, ';');

		std::getline(ip, edad, ';');
		int edadInt = stoi(edad);

		std::getline(ip, peso, '\n');
		float pesoInt = stof(peso);

		std::cout << "Nombre: " << nombre << " " << apellido << "\n";
		std::cout << "Edad: " << edadInt << "\n";
		std::cout << "Peso: " << pesoInt << "\n";
		std::cout << "=========================" << "\n";
	}
}
	
	ip.close();*/

	std::ifstream archivo2("../ProjectM06/game.csv");
	std::string parameter;
	std::string titulo;
	std::array<std::string, 3> arrayTextures;
	int textures_n = 0;


	if (!archivo2.is_open) {

		while (archivo2.good()) {

			std::getline(archivo2, parameter, ';');


			if (parameter.compare("TEXTURES")) {

				std::getline(archivo2, parameter, ';');
				textures_n = std::stoi(parameter);

				for (int i = 0; i < arrayTextures.size(); i++) {
					arrayTextures[i];
				};
			}
			else if(parameter.compare("TITLE")) {
				std::getline(archivo2, titulo, ';');
			};
		};
	};
}
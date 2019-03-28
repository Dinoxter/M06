#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include "raylib.h"

struct Level {
	std::string title;
	int number;
	int width;
	int height;
	int** background;
	std::string* collisions;
	int** foreground;
};
Level* levelsStruct;

int loadBackground(std::ifstream &file, Level &s1);

/*int loadLevels(std::ifstream& file, int num) {
	int w = 12;
	int h = 8;
	int nume_level;
	std::string(title);

	std::string word;

	std::getline(file, word, ';');
	num_level = std::stoi(file, word, ';');

	std::getline(file, word, ';');
	title = word;

	if(word.compare("LEVEL") != 0)
		return 1;
	std::getline(file, word, ';');

	levels[i].background = new int[w];
	levels[i].collisions = new std::string[w];
	levels[i].foreground = new int[w];

	for (int j = 0; j < q; j++) {
		levels[i].background[j] = new int[h];
		levels[i].collisions[j] = new std::string[h];
		levels[i].foreground[j] = new int[h];
	}

	for (int k = 0; k < 3; k++) {
		std::getline(file, word, ';');
		std::string block = word;
		std::getline(file, word, '\n');

		if (word.compare("BACKGROUND") == 0)
			loadBackground(file, w, h);
		else if (word.compare("FOREGROUND") == 0)
			loadForeground(file, w, h);
		else if (word.compare("COLLISIOBS") == 0)
			loadCollisions(file, w, h);
	}
}*/

int main() {
	/*std::ofstream archivo;
	
	archivo.open("datos.csv");

	archivo << "a;b;c;\n";
	archivo << "d;e;f;\n";
	archivo << "1;2;3.456;\n";

	archivo.close();

	return 0;

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
	};*/

	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(BLUE);

		DrawText("He echo una ventana y no me gusta para nada", 190, 200, 20, RED);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}
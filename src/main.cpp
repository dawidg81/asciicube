#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool inGame = false;

char blocks[] = {
	' ', // 0 = Air
	'#', // 1 = Stone
	'.', // 2 = Dirt
	'"', // 3 = Grass
	'W', // 4 = Wood
	'|'  // 5 = Log
};

int game(){
	int screenWidth = 40;
	int screenHeight = 40;
	char screen[screenWidth][screenHeight];

	int levelX = 16;
	int levelY = 16;
	int levelZ = 16;
	int levelArray[levelX][levelY][levelZ];

	int playerX = levelX / 2;
	int playerY = levelY;
	int playerZ = levelZ / 2;
	char player = '@';


	int cursorRelX = 0;
	int cursorRelY = 0;
	int cursorRelZ = 0;
	int cursorX = playerX - cursorRelX;
	int cursorY = playerY - cursorRelY;
	int cursorZ = playerZ - cursorRelZ;
	char cursor = 'X';

	// Drawing blocks into level array
	for(int x = 0; x < levelX; x++){
		for(int y = 0; y < levelY; y++){
			for(int z = 0; z < levelZ; z++){
				if(y < 8){
					levelArray[x][y][z] = 2;
				} else if (y == 8){
					levelArray[x][y][z] = 3;
				} else {
					levelArray[x][y][z] = 0;
				}
			}
		}
	}
	
	// Clearing screen
	for(int i = 0; i < screenWidth; i++){
		for(int j = 0; j < screenHeight; j++){
			screen[i][j] = ' ';
		}
	}



	// Drawing onto the screen
	while(inGame){
		system("clear");

		// Level
		for(int x = 0; x < levelX && x < screenHeight; x++){
			for(int z = 0; z < levelZ && z < screenWidth; z++){
				for(int y = levelY - 1; y >= 0; y--){
					int block = levelArray[x][y][z];

					if(block != 0){
						screen[z][x] = blocks[block];
						break;
					}
				}
			}
		}


		// Player and cursor
		if(playerX >= 0 && playerX < screenHeight && playerZ >= 0 && playerZ < screenWidth){
			screen[playerZ][playerX] = player;
		}

		if(cursorX >=0 && cursorX < screenHeight && cursorZ >= 0 && cursorZ < screenWidth){
			screen[cursorZ][cursorX] = cursor;
		}
	
		for(int y = 0; y  < screenHeight; y++){
			for(int x = 0; x < screenWidth; x++){
				putchar(screen[x][y]);
			}
			putchar('\n');
		}

		string in;
		cout << "[@]> ";
		cin >> in;
		
		// player
		if(in == "w"){
			playerX--;
		} else if(in == "s"){
			playerX++;
		} else if(in == "a"){
			playerZ--;
		} else if(in == "d"){
			playerZ++;
		} else if(in == "q"){
			inGame = false;
		// cursor
		} else if(in == "h"){
			cursorRelZ--;
		} else if(in == "j"){
			cursorRelX++;
		} else if(in == "k"){
			cursorRelX--;
		} else if(in == "l"){
			cursorRelZ++;
		}
	}

	return 0;
}

int main(){
	cout << "Welcome to AsciiCube.\n"
		<< "Type 'help' or read README.txt file (should be included with the installation) for more information.\n\n";

	while(true){
		string input;
		cout << "[asciicube] >> ";
		cin >> input;

		if(input == "help"){
			cout << "Hello, this is help. I will give you commands.\n\n"
				"play - starts the game\n"
				"help - shows list of commands and shortly describes them.\n"
				"about - Shows more information about this program.\n"
				"quit - gracefully quits the program. (Alias: exit)\n\n";
		} else if(input == "about"){
			cout << "This is AsciiCube v0.0.0 made in Poland by dawidg81 on 2025-12-07 (YYYY-MM-DD).\n"
				<< "Inspiration from ClassiCube.\n\n"
				<< "You will find WAY more information in this wiki:\n"
				<< "    http://ludinko23.duckdns.org/wiki\n"
				<< "                           (in courtesy of Ludinko23).\n\n";
		} else if(input == "play"){
			inGame = true;
			game();
		} else if(input == "quit" || input == "exit"){
			cout << "Bye!\n";
			return 0;
		} else {
			cout << "Unknown command!\n";
		}
	}

	return 0;
}

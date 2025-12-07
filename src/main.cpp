#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "Merry Christmas! Welcome to AsciiCube.\n"
		<< "Type 'help' for more information.\n";

	while(true){
		string input;
		cout << "[@] >> ";
		cin >> input;

		if(input == "help"){
			cout << "Hello, this is help. I will give you commands.\n"
				<< "play - start a local singleplayer game.\n"
				<< "peerplay <address> - directly connects to an existing multiplayer game on the given address.\n"
				<< "                     If address is not given, starts a new multiplayer game with operator status.\n"
				<< "list - connects to a server that sends a list of currently online peer-nets.\n"
				<< "about - Shows more information about this program.\n"
				<< "quit - gracefully quits the program.";
		} else if(input == "about"){
			cout << "This is AsciiCube v0.0.0 made in Poland by dawidg81 on 2025-12-07 (YYYY-MM-DD).\n";
		} else if(input == "quit"){
			cout << "Bye!\n";
			return 0;
		}
	}

	return 0;
}

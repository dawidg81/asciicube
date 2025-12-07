#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "Welcome to AsciiCube v0.0.0 by dawidg81.\n"
		<< "Type 'help' for more information.\n";

	while(true){
		string input;
		cout << "[@] >> ";
		cin >> input;

		if(input == "help"){
			cout << "Hello, this is help. I will give you commands.\n"
				<< "play - start a local singleplayer game.\n"
				<< "peerplay <address> - joins an existing multiplayer game on the given address.\n"
				<< "                     If address is not given, starts a new multiplayer game with operator status.\n"
				<< "about - Shows more information about this program.\n"
				<< "quit - gracefully quits the program.";
		}
	}
	
	return 0;
}

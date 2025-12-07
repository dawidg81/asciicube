#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "Merry Christmas! Welcome to AsciiCube.\n"
		<< "Type 'help' for more information.\n\n";

	while(true){
		string input;
		cout << "[@] >> ";
		cin >> input;

		if(input == "help"){
			cout << "Hello, this is help. I will give you commands.\n\n"
				<< "play - start a local singleplayer game.\n"
				<< "peerplay <address> - directly connects to an existing multiplayer game on the given address.\n"
				<< "                     If address is not given, starts a new multiplayer game with operator status.\n"
				<< "list - connects to a server that sends a list of currently online peer-nets.\n"
				<< "about - Shows more information about this program.\n"
				<< "quit - gracefully quits the program. (Alias: exit)\n\n";
		} else if(input == "about"){
			cout << "This is AsciiCube v0.0.0 made in Poland by dawidg81 on 2025-12-07 (YYYY-MM-DD).\n"
				<< "Inspiration from ClassiCube.\n"
				<< "Peer-to-peer network is different that server-client network. In peer-to-peer networking you are connecting to other 'client'\n"
				<< "having the same privileges in the network meaning (this game will support in-game operators).\n\n"
				<< "You will find WAY more information in this wiki:\n"
				<< "    http://ludinko23.duckdns.org/wiki"
				<< "                           (in courtesy of Ludinko23).\n\n";
		} else if(input == "quit" || input == "exit"){
			cout << "Bye!\n";
			return 0;
		} else {
			cout << "That command is not known to the command handler. If you think that it's a bug, please tell the developers!\n";
		}
	}

	return 0;
}

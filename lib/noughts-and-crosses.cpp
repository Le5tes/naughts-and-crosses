#include <iostream>
#include "game.h"
void openingMessages(){
	std::cout << "Welcome to noughts and crosses! \n ";
	std::cout << "Noughts goes first as you well know. \n";
}


int main(){

	openingMessages();
	std::string startGame;
	do {
		Game game;
		game.start();
		do{
			std::cout << "Do you want to play again? y/n";
			std::cin >> startGame;
		} 
		while (startGame == "y" or startGame == "n");
	} 
	while (startGame == "y"); 

	// Board myBoard;
	
	// myBoard.setPosition(0,2,88);
	// myBoard.setPosition(2,0,79);
	// myBoard.print();
}

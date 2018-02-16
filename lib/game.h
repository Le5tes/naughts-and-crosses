#include "board.h"
#include <iostream>
class Game{

private:
	Board m_board;
	char m_turn;

public:
	
	void start(){
		m_turn = 'O'; 
		do {
			int x = getInput();
			m_board.setPosition(x/3, x%3, m_turn);
			nextTurn();
		} 
		while(!m_board.winner());

	}

private:

	int getInput(){
		char a;
		char b;
		do {
			std::cout << m_turn <<" take your go: ";
			std::cin >> a;
			std::cin >>b;
			std::cin.ignore(32767, '\n');
		} while ((a == 'a' or a == 'b' or a == 'c') and (b == '1' or b == '2' or b == '3'));
		int output = (a - 96) * 3 + (b-49); //converting chars to numbers
		return output;
	}

	char nextTurn(){
		if (m_turn == 'O'){
			m_turn = 'X';
		} else {
			m_turn = 'O';
		}
	}
		
	
};
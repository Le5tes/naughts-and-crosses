#include <iostream>
#include "game.h"
// using namespace std;
void output(char board[3][3]){
	for(int i = 0; i < 3; i++){
		// std::string output = "";
		for(int j = 0; j < 3; j++){
			if (board[i][j]){
				std::cout << board[i][j];
			} else {
				std::cout << " ";
			}
			if (j<2){std::cout << "#";}
		}
		std::cout << "\n"; 
		if (i<2){ std::cout << "#####" <<"\n"; }
	}
	
}
int main(){
char myBoard[3][3] = {" "};
myBoard[0][2] = 88;
myBoard[2][0] = 79;

output(myBoard);

}
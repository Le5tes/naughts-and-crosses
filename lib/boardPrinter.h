#include <iostream>
class BoardPrinter{
public:
	void print(char board[3][3]){
		std::cout << "  a b c\n";
		for(int i = 0; i < 3; i++){
			std::cout << i << " ";
			for(int j = 0; j < 3; j++){
				if (board[i][j]){
					std::cout << board[i][j];
				} else {
					std::cout << " ";
				}
				if (j<2){std::cout << "|";}
			}
			std::cout << "\n"; 
			if (i<2){ std::cout << "  -+-+-" <<"\n"; }
		}	
	}
};
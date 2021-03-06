#include "boardPrinter.h"
class Board{

public:
	Board(){
		//The board should be empty on startup
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				m_array[i][j] = 32; //32 => ' '
			}
		}
	}
	char getPosition(int x, int y){
		return m_array[x][y];
	}
	void setPosition(int x, int y, char value){
		m_array[x][y] = value;
	}

	char winner(){
		if(char response = checkHorizonals()){
			return response;
		}
		else if(char response = checkVerticals()){
			return response;
		}
		else if(char response = checkDiagonals()){
			return response;
		}
		else{
			return 0;
		}
	}

	void print(){
		printer.print(m_array);
	}
	
private:
	char m_array[3][3] = {};
	BoardPrinter printer; 

	char checkThree(char* array){
		if (array[0] == array[1] and array[1] == array[2]){
			return array[0];
		} else {
			return 0;
		}
	}

	char checkHorizonals(){
		for(int i = 0; i < 3; i++){
			if(char response = checkThree(m_array[i])){
				return response;
			}
		}
		return 0;	
	}
	char checkVerticals(){
		for(int j = 0; j < 3; j++){
			char array[3] = {};
			for(int i = 0; i < 3; i++){
				array[i] = m_array[i][j];
			}
			if(char response = checkThree(array)){
				return response;
			}
		} 
		return 0;
	}
	char checkDiagonals(){
		char array[3] = {};
		for(char i=0; i<3; i++){	
			array[i] = m_array[i][i];
		}
		if(char response = checkThree(array)){
			return response;
		}

		for(char i=0; i<3; i++){	
			array[i] = m_array[2-i][i];
		}
		if(char response = checkThree(array)){
			return response;
		}
		
		return 0;		
	}

};
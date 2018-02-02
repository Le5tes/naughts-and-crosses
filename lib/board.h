#include <iostream>
class Board{
private:
	char m_array[3][3] = {};
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
		else{
			return 0;
		}
	}
private:
	char checkThree(char* array){
		std::cout << "\n" << array[0] << array[1] << array[2] <<"\n";
		if (array[1] == array[2] and array[1] == array[0]){
			return array[1];
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

};
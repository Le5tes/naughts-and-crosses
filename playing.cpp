#include <iostream>
using namespace std;
int main(){
// char testArray[3];
// int i = 2;
// testArray[2] = 120;

// std::cout << testArray[i];


char testArray[3] {"x"};
char testArray2[3] {"x"};

bool me = testArray == testArray2;
std::cout << me;
}
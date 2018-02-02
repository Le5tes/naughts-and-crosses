#include "catch.hpp"
#include "../lib/board.h"

SCENARIO("Board"){
	GIVEN("An empty board"){
		Board board;
		WHEN("A value is put into the board"){
			char x('X');
			board.setPosition(0,2,x);
			THEN("The value in the board changes"){
				REQUIRE(board.getPosition(0,2) == x);
			}
		}
		WHEN("A value hasn't been assigned"){
			THEN("It is a space"){
				char empty(' ');
				REQUIRE(board.getPosition(0,0) == empty);
			}
		}
	}
	GIVEN("A Late Game Board"){
		Board board;
		char x('X');
		char o('O');
		board.setPosition(0,2,x);
		board.setPosition(0,0,o);
		board.setPosition(2,0,x);
		board.setPosition(1,1,o);
		board.setPosition(2,2,x);
		WHEN("there aren't any rows of 3 yet"){
			THEN("board.winner should be null"){
				REQUIRE(board.winner() == 0);
			}
		}
		WHEN("the winning move is played producing a row of Xs"){
			board.setPosition(1,2,o);
			board.setPosition(2,1,x);
			THEN("board.winner should be the winner"){
				REQUIRE(board.winner() == x);
			}
		}
		WHEN("the winning move is played producing a column of Xs"){
			board.setPosition(2,1,o);
			board.setPosition(1,2,x);
			THEN("board.winner should be the winner"){
				REQUIRE(board.winner() == x);
			}
		}
	}
	GIVEN("A different board"){
		Board board;
		char x('X');
		
		WHEN("the winning move is played producing a diagonal of Xs from 0,0 to 2,2"){
			board.setPosition(0,0,x);
			board.setPosition(1,1,x);
			board.setPosition(2,2,x);
			THEN("board.winner should be the winner"){
				REQUIRE(board.winner() == x);
			}
		}
		WHEN("the winning move is played producing a diagonal of Xs from 0,0 to 2,2"){
			board.setPosition(0,2,x);
			board.setPosition(1,1,x);
			board.setPosition(2,0,x);
			THEN("board.winner should be the winner"){
				REQUIRE(board.winner() == x);
			}
		}
	}
}


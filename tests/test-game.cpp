#include "catch.hpp"

SCENARIO("Game"){
	GIVEN("An empty game"){
		Game game()
		WHEN("A player chooses a position"){
			game.play(0,2)
			THEN("The board is updated"){
				char x("X") 
				REQUIRE(game.board.position(0,2) == x) 
			}
		}

	}
}
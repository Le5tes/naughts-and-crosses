#include "catch.hpp"

SCENARIO("A Test test") {
	GIVEN("Two numbers") {
		int a = 5;
		int b = 6;
		WHEN("Added Together") {
			int c = a + b;
			THEN("They sum correctly"){
				REQUIRE(c == 11);
			}
		}
	}
}
#include "catch.hpp"
#include "../source/example.hpp"

SCENARIO("factorial of 3 is 6")
{
    GIVEN("num 3")
    {
        WHEN("lol xD")
        {
            THEN("hahah")
            {
                REQUIRE(Factorial(3) == 6);
            }
        }
    }
}

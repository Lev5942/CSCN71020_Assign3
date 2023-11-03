#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* rockPaperScissor(const char* player1,const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		//check if player1 can have invalid
		TEST_METHOD(InvalidPlayer1)
		{
			char* player1 = "erwqrwe";
			char* player2 = "Paper";

			char* result1 = rockPaperScissor(player1, player2);

			Assert::AreEqual("Invalid", result1);

		}
		//Check if player2 can have invalid
		TEST_METHOD(InvalidPlayer2)
		{
			char* player1 = "Paper";
			char* player2 = "fdafsd";

			char* result2 = rockPaperScissor(player1, player2);

			Assert::AreEqual("Invalid", result2);
		}

		//Test for draw if both player pick the same thing
		TEST_METHOD(TestForDraw)
		{
			char* player1 = "Paper";
			char* player2 = "Paper";

			char* result3 = rockPaperScissor(player1, player2);

			Assert::AreEqual("Draw", result3);

		}

		//test for the winner between player 1 and 2 where player 1 picks paper and player 2 picks paper
		TEST_METHOD(TestRockVersusPaper)
		{
			char* player1 = "Rock";
			char* player2 = "Paper";
			char* result4 = rockPaperScissor(player1, player2);
			Assert::AreEqual("Player2", result4);
		}

		//test for the winner between player 1 and 2 where player 1 picks paper and player 2 picks scissors
		TEST_METHOD(TestPaperVersusScissors)
		{
			char* player1 = "Paper";
			char* player2 = "Scissors";
			char* result5 = rockPaperScissor(player1, player2);
			Assert::AreEqual("Player2", result5);
		}

		//test for the winner between player 1 and 2 where player 1 picks scissors and player 2 picks rock
		TEST_METHOD(TestScissorsVersusRock)
		{
			char* player1 = "Scissors";
			char* player2 = "Rock";
			char* result6 = rockPaperScissor(player1, player2);
			Assert::AreEqual("Player2", result6);
		}

		//test for the winner between player 1 and 2 where player 1 picks scissors and player 2 picks paper
		TEST_METHOD(TestScissorsVersusPaper)
		{
			char* player1 = "Scissors";
			char* player2 = "Paper";
			char* result7 = rockPaperScissor(player1, player2);
			Assert::AreEqual("Player1", result7);
		}

		//test for the winner between player 1 and 2 where player 1 picks Rock and player 2 picks Scissors
		TEST_METHOD(TestRockVersusScissors)
		{
			char* player1 = "Rock";
			char* player2 = "Scissors";
			char* result8 = rockPaperScissor(player1, player2);
			Assert::AreEqual("Player1", result8);
		}

		//test for the winner between player 1 and 2 where player 1 picks paper and player 2 picks rock
		TEST_METHOD(TestPaperVersusRock)
		{
			char* player1 = "Paper";
			char* player2 = "Rock";
			char* result9 = rockPaperScissor(player1, player2);
			Assert::AreEqual("Player1", result9);
		}

	};
}

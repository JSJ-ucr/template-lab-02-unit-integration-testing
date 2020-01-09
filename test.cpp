#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world\n", echo(3, test_val));
}

TEST(EchoTest,EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
        EXPECT_EQ("\n", echo(1, test_val));

}

TEST(EchoTest,FullSentence) {
	char* test_val[9]; test_val[0] = "./c-echo"; test_val[1] = "I'm"; test_val[2] = "just"; test_val[3] = "gonna"; test_val[4] = "go"; test_val[5] = "eat"; test_val[6] = "a"; test_val[7] = "cheesed"; test_val[8] = "borger.";
        EXPECT_EQ("I'm just gonna go eat a cheesed borger.\n", echo(9, test_val));
}

TEST(EchoTest, Conversation) {
	char* test_val[16]; test_val[0] = "./c-echo"; test_val[1] = "\"Hey,"; test_val[2] = "who"; test_val[3] = "are"; test_val[4] = "you?\""; test_val[5] = "\"I'm"; test_val[6] = "the"; test_val[7] = "cheese"; test_val[8] = "inspector,"; test_val[9] = "and"; test_val[10] = "I'm"; test_val[11] = "here"; test_val[12] = "to"; test_val[13] = "inspect"; test_val[14] = "y'all's"; test_val[15] = "cheese.\"";
        EXPECT_EQ("\"Hey, who are you?\" \"I'm the cheese inspector, and I'm here to inspect y'all's cheese.\"\n", echo(16, test_val));
}

TEST(EchoTest, JustOneLongString) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Supercallifragilisticexpealidocious";
        EXPECT_EQ("Supercallifragilisticexpealidocious\n", echo(2, test_val));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

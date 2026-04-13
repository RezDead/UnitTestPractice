/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// TEST(PasswordTest, single_letter_password)
// {
// 	Password my_password;
// 	int actual = my_password.count_leading_characters("Z");
// 	ASSERT_EQ(1, actual);
// }

// TEST(PasswordTest, double_same_password){
// 	Password my_password;
// 	ASSERT_EQ(2, my_password.count_leading_characters("aa"));
// }

// TEST(PasswordTest, empty_password){
// 	Password my_password;
// 	ASSERT_EQ(0, my_password.count_leading_characters(""));
// }

// TEST(PasswordTest, double_end_password){
// 	Password my_password;
// 	ASSERT_EQ(2, my_password.count_leading_characters("aab"));
// }

// TEST(PasswordTest, mixed_case_password){
// 	Password my_password;
// 	ASSERT_EQ(1, my_password.count_leading_characters("aba"));
// }

// TEST(PasswordTest, capital_case_password){
// 	Password my_password;
// 	ASSERT_EQ(1, my_password.count_leading_characters("Aab"));
// }

TEST(PasswordTest, empty_case_password){
	Password my_password;
	ASSERT_FALSE(my_password.has_mixed_case(""));
}

TEST(PasswordTest, no_caps_case){
	Password my_password;
	ASSERT_FALSE(my_password.has_mixed_case("return"));
}

TEST(PasswordTest, mixed_case){
	Password my_password;
	ASSERT_TRUE(my_password.has_mixed_case("RaRner"));
}

TEST(PasswordTest, only_caps){
	Password my_password;
	ASSERT_FALSE(my_password.has_mixed_case("RARER"));
}

TEST(PasswordTest, only_numbers){
	Password my_password;
	ASSERT_FALSE(my_password.has_mixed_case("54321"));
}
#include "pch.h"
#include "../Project1/checker.cpp"
#include <string>
using namespace std;

class SimilarityCheckerFixture : public testing::Test
{
public:
	

};

TEST_F(SimilarityCheckerFixture, length_check_test_1)
{
	SimilarityChecker check{ "sd", "ds" };
	EXPECT_EQ(60, check.lengthChecker());
}

TEST_F(SimilarityCheckerFixture, length_check_test_2)
{
	SimilarityChecker check{ "sd", "dsdfsd" };
	EXPECT_EQ(0, check.lengthChecker());
}

TEST_F(SimilarityCheckerFixture, length_check_test_3)
{
	SimilarityChecker check{ "sd", "dsd" };
	EXPECT_EQ(30, check.lengthChecker());
}
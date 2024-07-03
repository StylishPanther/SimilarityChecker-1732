#include "pch.h"
#include "../Project1/checker.cpp"
#include <string>
using namespace std;

class SimilarityCheckerFixture : public testing::Test
{
public:
	SimilarityChecker check{"sd", "ds"};

};

TEST_F(SimilarityCheckerFixture, length_check_test_1)
{
	EXPECT_EQ(60, check.lengthChecker());
}

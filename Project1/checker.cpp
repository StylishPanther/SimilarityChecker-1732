#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace score
{
	const int LENGTH_PERFECT_SCORE = 60;
	const int LENGTH_ZERO_SCORE = 0;
}
using namespace score;

class SimilarityChecker
{
public:
	SimilarityChecker(string str1, string str2) : first{ str1 }, second{ str2 }
	{

	}
	int lengthChecker(void)
	{
		int ret;
		int longLength = max(first.length(), second.length());
		int shortLength = min(first.length(), second.length());
		if (first.length() == second.length())
		{
			ret = LENGTH_PERFECT_SCORE;
		}
		else if ((longLength / shortLength) >= 2)
		{
			ret = LENGTH_ZERO_SCORE;
		}
		else
		{
			double length_diff = (double)(longLength - shortLength);
			ret = ((1 - (length_diff / (double)shortLength)) * 60);
		}
		return ret;
	}
private:
	string first;
	string second;
};
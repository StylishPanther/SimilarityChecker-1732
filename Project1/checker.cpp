#include <iostream>
#include <string>
using namespace std;

class SimilarityChecker
{
public:
	SimilarityChecker(string str1, string str2) : first{ str1 }, second{ str2 }
	{

	}
	int lengthChecker(void)
	{
		if (first.length() == second.length())
			return 60;
		if ((max(first.length(), second.length()) /
			min(first.length(), second.length())) >= 2)
		{
			return 0;
		}
		return 30;
	}
private:
	string first;
	string second;
};
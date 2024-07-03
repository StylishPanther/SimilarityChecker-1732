#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class SimilarityChecker
{
public:
	SimilarityChecker(string str1, string str2) : first{ str1 }, second{ str2 }
	{

	}
	double lengthChecker(void)
	{
		double ret;
		if (first.length() == second.length())
			ret = 60;
		else if ((max(first.length(), second.length()) /
			min(first.length(), second.length())) >= 2)
		{
			ret = 0;
		}
		else
		{
			double length_diff = first.length() > second.length() ?
				first.length() - second.length() :
				second.length() - first.length();
			ret = (1 - (length_diff / min(first.length(), second.length()))) * 60;
		}
		return ret;
	}
private:
	string first;
	string second;
};
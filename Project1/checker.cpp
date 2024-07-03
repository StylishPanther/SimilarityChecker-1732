#include <string>
using namespace std;

class SimilarityChecker
{
public:
	SimilarityChecker(string str1, string str2) : first{ first }, second{ second }
	{

	}
	int lengthChecker(void)
	{
		if (first.length() == second.length())
			return 60;
	}
private:
	string first;
	string second;
};
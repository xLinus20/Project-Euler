#include "../global.h"

struct problem_1
{
	static std::string solve()
	{
		std::cout << "Problem 1: ";

		int sum = 0;

		for (auto i = 0; i < 1000; ++i)
		{
			if (i%3 == 0 || i%5 == 0)
				sum += i;
		}	

		return std::to_string(sum);
	}
};
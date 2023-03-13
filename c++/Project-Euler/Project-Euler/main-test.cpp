#include "problems/problem_1.cpp"

void read_file(std::vector<std::string>& answers)
{
	std::ifstream file("answers.txt");
	std::string line;

	while (std::getline(file, line))
		answers.push_back(line);
}

void log_result(const std::string& answer, std::function<std::string()> func)
{
	log_start();

	std::string solution = (func() == answer) ? "Answer is correct." : "Answer is wrong.";
	std::cout << solution << std::endl;

	log_end();
}

int main()
{
	std::vector<std::string> answers;
	read_file(answers);

	log_result(answers[0], &problem_1::solve);
}
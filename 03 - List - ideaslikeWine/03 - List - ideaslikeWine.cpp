#include <iostream>
#include <list>
#include <string>

std::list<std::string> getWords(std::string sentence_, char seperator_)
{
	int foundPosition = -1;

	if (!sentence_.empty())
	{
		do {
			foundPosition = sentence_.find(sentence_, foundPosition + 1);
			if (foundPosition != -1) {
				std::string words = sentence_.substr(foundPosition, 3);
				std::cout << "Found :" << words << " Pos :" << foundPosition << std::endl;
			}

		} while (foundPosition != -1);
	}
}


int main()
{
   //create first string sentence
	std::string quote = "Sometimes ideas are like good wine in that they just need time";

	//create list with all words inside of it
	std::list<std::string> words;
}


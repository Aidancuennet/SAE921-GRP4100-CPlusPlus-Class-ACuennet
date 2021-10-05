#include <iostream>
#include <map>

int main()
{
    std::string answer;
    std::map<std::string, std::string> annuary;

    do
    {
        //get name
        std::cout << "Hello, please enter a first name\n";
        std::cin >> answer;

        std::string name = answer;
        std::cout << "please enter a last name for this person" << std::endl;
        std::cin >> answer;
        name += " " + answer;

        //get phone
        std::cout << "please enter the person's phone number" << std::endl;
        std::cin >> answer;
        std::string phone = answer;

        //add to annuary
        annuary.emplace(name, phone);

        //ask to add again
        std::cout << "add someone else ?(y/n)" << std::endl;
        std::cin >> answer;
    } while (answer == "y");

    do
    {
     
        std::cout << "Enter the first name of the person you want to get" << std::endl;
        std::cin >> answer;

        std::string name = answer;
        std::cout << "enter last name of such person" << std::endl;
        std::cin >> answer;
        name += " " + answer;

        
        std::cout << "Phone : " << annuary.at(name) << std::endl;

     
        std::cout << "find someone else ?(y/n)" << std::endl;
        std::cin >> answer;
    } while (answer == "y");
}
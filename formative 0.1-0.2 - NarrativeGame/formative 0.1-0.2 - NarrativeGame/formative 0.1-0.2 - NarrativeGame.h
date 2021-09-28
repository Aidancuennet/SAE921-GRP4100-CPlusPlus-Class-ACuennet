#pragma once
#include <iostream>
#include <array>
#include <string>
#include "formative 0.1-0.2 - NarrativeGame.h"

std::array < std::string, 3> messages{};

#pragma region Personnas

// A character has a name, a title, is born on a plant, and commands a ship
struct Persona {
    std::string name;
    std::string title;
    std::string planet;
    std::string ship;
};

// Get All fields as values and put them into the struct
Persona initAPersona(
    std::string name_,
    std::string title_,
    std::string planet_,
    std::string ship_) {

    Persona characterInitiated;
    characterInitiated.name = name_;
    characterInitiated.title = title_;
    characterInitiated.ship = ship_;
    characterInitiated.planet = planet_;

    return characterInitiated;

}

#pragma endregion

#pragma region Messages

// The whole bunch of messages
void initMessages() {
    messages.at(0) = "Hi [Title] [Name], welcome to the federation board.";
    messages.at(1) = "There is a very important mission on [Planet].";
    messages.at(2) = "[Title] [Name], go to [Ship] and combat !";
};

/*
* do the unique remplacement operation
*
* Parameters :
* message_ : the string where the replacement will operate
* eye_ : the string to replace
* needle_ : the new string to put in place
*
* return a new fresh message with the replacement done. If no replacement required, then the message is identical returned
*
*/
std::string messageReplacement(std::string message_, std::string eye_, std::string needle_) {

    int foundPosition;

    do {
        foundPosition = message_.find(eye_, foundPosition + 1);
        if (foundPosition != -1) {
            //std::cout << "Found " << eye_ << " in " << message_ << " pos:" << foundPosition << std::endl;
            message_.replace(foundPosition, eye_.length(), needle_);
        }

    } while (foundPosition != -1);

    return message_;


};

// Take the message and will try to change each key word with the personna fields
std::string getReplacedMessage(std::string message_, Persona persona_) {

    message_ = messageReplacement(message_, "[Title]", persona_.title);
    message_ = messageReplacement(message_, "[Name]", persona_.name);
    message_ = messageReplacement(message_, "[Planet]", persona_.planet);
    message_ = messageReplacement(message_, "[Ship]", persona_.ship);
    return message_;

};
#pragma endregion


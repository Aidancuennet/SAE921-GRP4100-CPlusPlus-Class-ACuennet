#include "Sweets.h"


Sweets::Sweets()
{
	quantity = 0;
}

Sweets::Sweets(SweetType type, int quantity)
{
	this->type_ = type;
	this->quantity = quantity;
	
}


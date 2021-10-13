#include "appleTree.h"

appleTree::appleTree() : Tree()
{
	fruitWeight = 0.150f;
	initFruitQuantity();

}

void appleTree::initFruitQuantity()
{
	nbFruits = 600 + rand() % 250;
}

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "random.h"
#include "DandDCharacter.h"

int main(int argc, char * argv[])
{
	// You might want to uncomment this when you want true random numbers
    // SetSeed(-1);

	// Just some test code to get you started
    Character character;
	character = GenerateCharacter();
	DisplayCharacter(character);
}

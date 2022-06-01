#ifndef _DandDCharacter
/*****************************************************************************
  DandDCharacter.h
  By Jim Ries
  Version 1.0, September 16, 2019
  Version 1.1, November 6, 2019
  Version 2.0, May 30, 2022
 *****************************************************************************/
#define _DandDCharacter

// Includes
#include <stdio.h>

// Data types
typedef enum _Ancestry 
{
  human, elf, halfling, dwarf, half_elf, half_orc
} Ancestry;

typedef struct _Character
{
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;

    Ancestry ancestry;
    char charname[256];
    char playername[256];
} Character;

// *** You should create a data type for the Party as well

// Functions
// *** You should have lots of functions here, but here are two that might make sense:
Character GenerateCharacter();
void DisplayCharacter(Character character);

#endif  // _DandDCharacter

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <ctime>
#include "BattleArenaGame.h"

/*A custom class is used to instantiate members of each force
		• The class stores a health variable, in addition to other information
		• The game contains two arrays, each containing instances of the custom class.These arrays make
		up the opposing forces.
		• During each turn, members of each force must ‘fight’.Upon completion of each turn the
		members of each force are sorted according to health.
		• When all members of a force have been defeated, a game - over message is displayed.*/
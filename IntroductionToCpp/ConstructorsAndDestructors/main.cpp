#include <cstdlib>
#include <iostream>
#include "nullString.h"

int main()
{
	nulString blank;
	std::cout << blank.getString() << std::endl;

	nulString paramCtor("Trey");
	std::cout << paramCtor.getString() << std::endl;

	nulString setString;
	setString.set("Gleason");
	std::cout << setString.getString() << std::endl;

	paramCtor.append("Gleason");
	std::cout << paramCtor.getString() << std::endl;

	nulString trimTest("TreyGleason");
	trimTest.trim(21);
	std::cout << trimTest.getString() << std::endl;

	/*nulString dataA("A");
	std::cout << dataA.getString() << std::endl;

	nulString dataB(dataA);
	std::cout << dataB.getString() << std::endl;

	dataB = dataA;
	std::cout << dataB.getString() << std::endl;*/


	return 0;
}
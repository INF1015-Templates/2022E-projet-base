///
/// Fonction principale du projet
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <iomanip>
#include <string>

#include <tclap/CmdLine.h>

#include "Arguments.hpp"

using namespace std;
using namespace std::literals;


int main(int argc, char* argv[]) {
	Arguments args = {};
	try {
		args = parseArgs(argc, argv);
	} catch (TCLAP::ArgException& e) {
		cout << "Error in parsing arg " << e.argId() << ": " << e.error() << "\n";
		return EXIT_FAILURE;
	}

	cout << ">>>> INF1015 DUNGEON CRAWLER 2021 <<<<" << "\n"
	     << ">- - - - - - GOTY EDITION - - - - - -<" << "\n";
}


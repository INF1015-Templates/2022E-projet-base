///
/// Traite les arguments de ligne de commande à l'aide de TCLAP.
///


#include <cstddef>
#include <cstdint>

#include <string>

#include <tclap/CmdLine.h>

#include "Arguments.hpp"

using namespace std;
using namespace std::literals;


Arguments parseArgs(int argc, char* argv[]) {
	TCLAP::CmdLine parser("Welcome brave adventurer to INF1015 Dungeon Crawler 2021 - GOTY Edition");

	parser.parse(argc, argv);

	return {};
}


#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "JoinPDBPlugin.h"

void JoinPDBPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void JoinPDBPlugin::run() {}

void JoinPDBPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "joinpdb";
myCommand += " -o";
myCommand += " ";
myCommand += outputfile + " ";
myCommand += " "+std::string(PluginManager::prefix())+"/"+myParameters["pdb1"]+" ";
myCommand += " "+std::string(PluginManager::prefix())+"/"+myParameters["pdb2"]+" ";
 system(myCommand.c_str());
}

PluginProxy<JoinPDBPlugin> JoinPDBPluginProxy = PluginProxy<JoinPDBPlugin>("JoinPDB", PluginManager::getInstance());

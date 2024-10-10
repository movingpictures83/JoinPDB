#ifndef JOINPDBPLUGIN_H
#define JOINPDBPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class JoinPDBPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "JoinPDB";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif

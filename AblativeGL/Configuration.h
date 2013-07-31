#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <fstream>
#include <string>

using namespace std;

class Configuration
{
  public:
		Configuration();
    ~Configuration();

    int WindowWidth;
    int WindowHeight;
    string WindowTitle;
};

#endif

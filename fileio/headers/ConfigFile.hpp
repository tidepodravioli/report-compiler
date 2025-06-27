#include <string>

class ConfigFile
{
    public:
    ConfigFile(std::string json);

    virtual bool open(std::string jsonFileName) = 0;
};
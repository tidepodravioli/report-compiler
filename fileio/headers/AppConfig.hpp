#include <string>

/**
 * @brief Represents the data read from an AppConfiguration for report-compiler
 * 
 */
class AppConfig
{
    private:

    public:
    /**
     * @brief Creates a new AppConfig object with default settings
     * 
     */
    AppConfig();

    /**
     * @brief Creates a new AppConfig object with the given JSON contents
     * 
     * @param json  
     */
    AppConfig(std::string json);

    /**
     * @brief Imports an AppConfig save
     * 
     * @param jsonFileName 
     * @return true 
     * @return false 
     */
    bool open(std::string jsonFileName);
};
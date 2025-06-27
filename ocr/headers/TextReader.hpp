#include <opencv2/opencv.hpp>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <string>

/**
 * @brief TextReader takes an input Mat and can read the text in a given area using OpenCV
 * 
 */
class TextReader
{
    private:

    public:
    TextReader(cv::Mat &source);

    /**
     * @brief Reads all the text on the Mat. Is more prone to errors as the entire document is being parsed at once.
     * 
     * @return std::string The text on the Mat
     */
    std::string readAll();

    /**
     * @brief Reads all the text on the given area of the Mat.
     * 
     * @param area The area to read from on the Mat
     * @return std::string The text on the given part of the Mat
     */
    std::string read(cv::Rect area);

    /**
     * @brief Gives the Mat after processing
     * 
     * @param result 
     */
    void getMat(Mat &result);

    /**
     * @brief Whether or not this TextReader is a valid instance with a readable Mat
     * 
     */
    bool valid()
};
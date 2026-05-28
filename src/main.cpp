#include "argfs.hpp"

int main()
{
    ARGFS argfs;

    try
    {
        argfs.run();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
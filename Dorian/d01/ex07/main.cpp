#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac < 3 || !av[2] || !av[3])
        return (0);
        
    std::ifstream ifs(av[1]);
    if (!ifs)
        return (0);
    std::string newFile = std::string(av[1]) + ".replace";
    std::ofstream ofs(newFile);
    if (!ofs)
        return (0);
    std::string word;
    std::cout << "Starting\n";

    std::string search = std::string(av[2]);
    std::string replace = std::string(av[3]);


    while (std::getline(ifs, word))
    {
        std::cout << "[" << word << "]\n";
        size_t  start = 0;

        while ((start = word.find(search)) != std::string::npos)
        {
            word.replace(start, search.size(), replace);
            // start = word.find(search, start + replace.size());
            start = start + replace.size();
        }
        ofs << word;
        ofs << std::endl;
    }
    return (0);
}
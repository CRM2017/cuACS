#ifndef ANIMALPROFILE_H
#define ANIMALPROFILE_H

#include <string>

class animalprofile
{
public:
    animalprofile();
    ~animalprofile();
    int getAnimalId();
    std::string getAnimalName();

private:
    int id;
    std::string name;


};

#endif // ANIMALPROFILE_H

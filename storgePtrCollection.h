#ifndef STORGEPTRCPLLECTION_H
#define STORGEPTRCPLLECTION_H

#include <memory>
#include <vector>
#include <unordered_map>

class Animals;

namespace storgePtrColl {
//use shared_ptr to avoid memory lecking
    typedef std::shared_ptr<Animals> AnimalsPtr;
    typedef std::shared_ptr<std::vector<AnimalsPtr>> AnimalsVector;
    typedef std::unordered_map<int, std::shared_ptr<Animals>> AnimalsMaps;

}


#endif // STORGEPTRCPLLECTION_H

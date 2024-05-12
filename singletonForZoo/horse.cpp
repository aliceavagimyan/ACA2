#include "horse.hpp"
Horse* Horse::instance=nullptr;

std::string Horse::getName() const {
    return "horse";
}

std::string Horse::voice() const {
    return "neigh";
}

Horse* Horse::getInstance() {
     if (!instance) {
        instance = new Horse("Horse");
    }
    return instance;
}
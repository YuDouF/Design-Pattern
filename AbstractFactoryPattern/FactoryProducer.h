#ifndef FACTORYPRODUCER_H
#define FACTORYPRODUCER_H
#include <string>

class Factory;
class FactoryProducer{
public:
	static Factory* GetFactory(std::string type);
};

#endif
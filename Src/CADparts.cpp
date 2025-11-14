#include "CADparts.h"

unsigned int CADparts::PartsId = 101;

CADparts::CADparts(const std::string& n, const std::string& m, const double& dm) : name(n), material(m), diameter(dm), Id(CADparts::PartsId) {}

CADparts::~CADparts() {}

CADparts::CADparts(const CADparts& cadp) : name(cadp.name), material(cadp.material), diameter(cadp.diameter), Id(CADparts::PartsId) {}

CADparts& CADparts::operator=(const CADparts& cadp)
{
	if (this != &cadp)
	{
		name = cadp.name;
		material = cadp.material;
		diameter = cadp.diameter;
		Id = cadp.Id;
	}
	return *this;
}

std::string CADparts::getName() const { return name; }
#include "Valves.h"

void Valves::setPartsId()
{
	CADparts::PartsId++;
}

Valves::Valves(const int& op, const std::string& m, const double& dm) : CADparts("Valve", m, dm), opening(op) { setPartsId(); }

Valves::~Valves() {}

Valves::Valves(const Valves& vl) : CADparts("Valve", vl.material, vl.diameter), opening(vl.opening) { setPartsId(); }

Valves& Valves::operator=(const Valves& vl)
{
	if (this != &vl)
	{
		name = vl.name;
		material = vl.material;
		diameter = vl.diameter;
		opening = vl.opening;
	}
	setPartsId();
	return *this;
}

std::string Valves::getMaterial() const { return material; }

double Valves::getDiameter() const { return diameter; }

double Valves::getPartsId() const { return Id; }

int Valves::getNo_ofOpening() const
{
	return opening;
}
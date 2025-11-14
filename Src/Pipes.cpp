#include "Pipes.h"

void Pipes::setPartsId()
{
	CADparts::PartsId++;
}

Pipes::Pipes(const double& len, const std::string& m, const double& dm) : CADparts("Pipe", m, dm), length(len) { setPartsId(); }

Pipes::~Pipes() {}

Pipes::Pipes(const Pipes& pi) : CADparts("Pipe", pi.material, pi.diameter), length(pi.length) { setPartsId(); }

Pipes& Pipes::operator=(const Pipes& pi)
{
	if (this != &pi)
	{
		name = pi.name;
		material = pi.material;
		diameter = pi.diameter;
		length = pi.length;
	}
	setPartsId();
	return *this;
}

std::string Pipes::getMaterial() const { return material; }

double Pipes::getDiameter() const { return diameter; }

double Pipes::getPartsId() const { return Id; }

double Pipes::getLength() const { return length; }
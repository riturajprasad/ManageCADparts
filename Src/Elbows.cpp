#include "Elbows.h"

void Elbows::setPartsId()
{
	CADparts::PartsId++;
}

Elbows::Elbows(const double& len, const std::string& m, const double& dm) : CADparts("Elbow", m, dm), length(len) { setPartsId(); }

Elbows::~Elbows() {}

Elbows::Elbows(const Elbows& el) : CADparts("Elbow", el.material, el.diameter), length(el.length) { setPartsId(); }

Elbows& Elbows::operator=(const Elbows& el)
{
	if (this != &el)
	{
		name = el.name;
		material = el.material;
		diameter = el.diameter;
		length = el.length;
	}
	setPartsId();
	return *this;
}

std::string Elbows::getMaterial() const { return material; }

double Elbows::getDiameter() const { return diameter; }

double Elbows::getPartsId() const { return Id; }

double Elbows::getArea() const
{
	return (length * length);
}
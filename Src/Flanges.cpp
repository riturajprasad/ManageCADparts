#include "Flanges.h"

void Flanges::setPartsId()
{
	CADparts::PartsId++;
}

Flanges::Flanges(const std::string& qu, const std::string& m, const double& dm) : CADparts("Flange", m, dm), quilty(qu) { setPartsId(); }

Flanges::~Flanges() {}

Flanges::Flanges(const Flanges& fl) : CADparts("Flange", fl.material, fl.diameter), quilty(fl.quilty) { setPartsId(); }

Flanges& Flanges::operator=(const Flanges& fl)
{
	if (this != &fl)
	{
		name = fl.name;
		material = fl.material;
		diameter = fl.diameter;
		quilty = fl.quilty;
	}
	setPartsId();
	return *this;
}

std::string Flanges::getMaterial() const { return material; }

double Flanges::getDiameter() const { return diameter; }

double Flanges::getPartsId() const { return Id; }

std::string Flanges::getQuilty() const
{
	return quilty;
}
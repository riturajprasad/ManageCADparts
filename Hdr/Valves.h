#pragma once
#include "CADparts.h"

class Valves : public CADparts
{
private:
	int opening;

	void setPartsId() override;
public:
	Valves(const int&, const std::string&, const double&);
	~Valves();
	Valves(const Valves&);
	Valves& operator=(const Valves&);

	std::string getMaterial() const override;
	double getDiameter() const override;
	double getPartsId() const override;
	int getNo_ofOpening() const;
};
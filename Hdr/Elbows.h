#pragma once
#include "CADparts.h"

class Elbows : public CADparts
{
private:
	double length;

	void setPartsId() override;
public:
	Elbows(const double&, const std::string&, const double&);
	~Elbows();
	Elbows(const Elbows&);
	Elbows& operator=(const Elbows&);

	std::string getMaterial() const override;
	double getDiameter() const override;
	double getPartsId() const override;
	double getArea() const;
};
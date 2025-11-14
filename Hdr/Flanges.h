#pragma once
#include "CADparts.h"

class Flanges : public CADparts
{
private:
	std::string quilty;

	void setPartsId() override;
public:
	Flanges(const std::string&, const std::string&, const double&);
	~Flanges();
	Flanges(const Flanges&);
	Flanges& operator=(const Flanges&);

	std::string getMaterial() const override;
	double getDiameter() const override;
	double getPartsId() const override;
	std::string getQuilty() const;
};
#pragma once
#include "CADparts.h"

class Pipes : public CADparts
{
private:
	double length;

	void setPartsId() override;
public:
	Pipes(const double&, const std::string&, const double&);
	~Pipes();
	Pipes(const Pipes&);
	Pipes& operator=(const Pipes&);

	std::string getMaterial() const override;
	double getDiameter() const override;
	double getPartsId() const override;
	double getLength() const;
};
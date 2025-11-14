#pragma once
#include <string>

class CADparts
{
protected:
	static unsigned int PartsId;
	unsigned int Id;
	std::string name;
	std::string material;
	double diameter;

	virtual void setPartsId() = 0;
public:
	CADparts(const std::string&, const std::string&, const double&);
	virtual ~CADparts();
	CADparts(const CADparts&);
	CADparts& operator=(const CADparts&);

	virtual std::string getName() const;
	virtual std::string getMaterial() const = 0;
	virtual double getDiameter() const = 0;
	virtual double getPartsId() const = 0;
};
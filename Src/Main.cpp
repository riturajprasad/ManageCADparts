#include <iostream>
#include <vector>
#include <algorithm>
#include "CADparts.h"
#include "Pipes.h"
#include "Valves.h"
#include "Elbows.h"
#include "Flanges.h"
using namespace std;

void addParts(vector<shared_ptr<CADparts>>& parts)
{
	unsigned int ch = 0;
	cout << "1. Pipes" << endl;
	cout << "2. Valves" << endl;
	cout << "3. Elbows" << endl;
	cout << "4. Flanges" << endl;
	cout << "Enter your parts choice: ";
	cin >> ch;
	cout << endl;
	if (ch == 1)
	{
		std::string material;
		double diameter;
		double length;
		cout << "Enter Pipes's Material: " << endl;
		cin >> material;
		cout << "Enter Pipes's Diameter: " << endl;
		cin >> diameter;
		if (diameter < 0) throw "Diameter never be negative\n";
		cout << "Enter Pipes's Length: " << endl;
		cin >> length;
		if (length < 0) throw "Length never be negative\n";
		parts.push_back(make_shared<Pipes>(length, material, diameter));
		cout << "Pipes Added succesfully!" << endl;
	}
	else if (ch == 2)
	{
		std::string material;
		double diameter;
		int opening;
		cout << "Enter Valves's Material: " << endl;
		cin >> material;
		cout << "Enter Valves's Diameter: " << endl;
		cin >> diameter;
		if (diameter < 0) throw "Diameter never be negative\n";
		cout << "Enter Valves's No of Opening: " << endl;
		cin >> opening;
		if (opening < 0) throw "Opening never be negative\n";
		parts.push_back(make_shared<Valves>(opening, material, diameter));
		cout << "Valves Added succesfully!" << endl;
	}
	else if (ch == 3)
	{
		std::string material;
		double diameter;
		double length;
		cout << "Enter Elbows's Material: " << endl;
		cin >> material;
		cout << "Enter Elbows's Diameter: " << endl;
		cin >> diameter;
		if (diameter < 0) throw "Diameter never be negative\n";
		cout << "Enter Elbows's Length: " << endl;
		cin >> length;
		if (length < 0) throw "Length never be negative\n";
		parts.push_back(make_shared<Elbows>(length, material, diameter));
		cout << "Elbows Added succesfully!" << endl;
	}
	else if (ch == 4)
	{
		std::string material;
		double diameter;
		string quilty;
		cout << "Enter Flanges's Material: " << endl;
		cin >> material;
		cout << "Enter Flanges's Diameter: " << endl;
		cin >> diameter;
		if (diameter < 0) throw "Diameter never be negative\n";
		cout << "Enter Flanges's Quilty: " << endl;
		cin >> quilty;
		parts.push_back(make_shared<Flanges>(quilty, material, diameter));
		cout << "Flanges Added succesfully!" << endl;
	}
	else cout << "Wrong number, please check the CAD parts list." << endl;
}
void viewParts(const vector<shared_ptr<CADparts>>&parts)
{
	for (const auto& it : parts)
	{
		if (auto p = dynamic_cast<Pipes*>(it.get()))
		{
			cout << p->getName() << " with Id number " << p->getPartsId() << endl;
			cout << "Use " << p->getMaterial() << " Materials" << endl;
			cout << "Diameter = " << p->getDiameter() << endl;
			cout << "Length = " << p->getLength() << endl << endl;
		}
		else if (auto v = dynamic_cast<Valves*>(it.get()))
		{
			cout << v->getName() << " with Id number " << v->getPartsId() << endl;
			cout << "Use " << v->getMaterial() << " Materials" << endl;
			cout << "Diameter = " << v->getDiameter() << endl;
			cout << "No of Opening = " << v->getNo_ofOpening() << endl << endl;
		}
		else if (auto e = dynamic_cast<Elbows*>(it.get()))
		{
			cout << e->getName() << " with Id number " << e->getPartsId() << endl;
			cout << "Use " << e->getMaterial() << " Materials" << endl;
			cout << "Diameter = " << e->getDiameter() << endl;
			cout << "Area = " << e->getArea() << endl << endl;
		}
		else if (auto f = dynamic_cast<Flanges*>(it.get()))
		{
			cout << f->getName() << " with Id number " << f->getPartsId() << endl;
			cout << "Use " << f->getMaterial() << " Materials" << endl;
			cout << "Diameter = " << f->getDiameter() << endl;
			cout << "Quality = " << f->getQuilty() << endl << endl;
		}
	}
}
void searchPartsbyId(const vector<shared_ptr<CADparts>>& parts, const unsigned int &id)
{
	bool found = false;
	for (auto &it : parts)
	{
		if (it->getName() == "Pipe" && it->getPartsId() == id)
		{
			cout << "Parts found!" << endl;
			Pipes* p = dynamic_cast<Pipes*>(it.get());
			cout << p->getName() << " with Id number " << p->getPartsId() << endl;
			cout << "Use " << p->getMaterial() << " Mateials" << endl;
			cout << "Diameter = " << p->getDiameter() << endl;
			cout << "Length = " << p->getLength() << endl << endl;
			found = true;
		}
		if (it->getName() == "Valve" && it->getPartsId() == id)
		{
			cout << "Parts found!" << endl;
			Valves* v = dynamic_cast<Valves*>(it.get());
			cout << v->getName() << " with Id number " << v->getPartsId() << endl;
			cout << "Use " << v->getMaterial() << " Mateials" << endl;
			cout << "Diameter = " << v->getDiameter() << endl;
			cout << "No of Opening = " << v->getNo_ofOpening() << endl << endl;
			found = true;
		}
		if (it->getName() == "Elbow" && it->getPartsId() == id)
		{
			cout << "Parts found!" << endl;
			Elbows* p = dynamic_cast<Elbows*>(it.get());
			cout << p->getName() << " with Id number " << p->getPartsId() << endl;
			cout << "Use " << p->getMaterial() << " Mateials" << endl;
			cout << "Diameter = " << p->getDiameter() << endl;
			cout << "Area = " << p->getArea() << endl << endl;
			found = true;
		}
		if (it->getName() == "Flange" && it->getPartsId() == id)
		{
			cout << "Parts found!" << endl;
			Flanges* p = dynamic_cast<Flanges*>(it.get());
			cout << p->getName() << " with Id number " << p->getPartsId() << endl;
			cout << "Use " << p->getMaterial() << " Mateials" << endl;
			cout << "Diameter = " << p->getDiameter() << endl;
			cout << "Quilty = " << p->getQuilty() << endl << endl;
			found = true;
		}
	}
	if (!found) cout << "Parts Not found!" << endl;
}
void deletePartsbyId(vector<shared_ptr<CADparts>>& parts, const unsigned int& id)
{
	bool found = false;
	for (int i=0; i<parts.size(); i++)
	{
		if (parts[i]->getPartsId() == id)
		{
			cout << "Parts Deleted!" << endl;
			// delete parts[i].get();
			parts.erase(parts.begin() + i);
			found = true;
		}
	}
	if (!found) cout << "Parts Not found!" << endl;
}

int main()
{
	vector<shared_ptr<CADparts>> parts;
	while (true)
	{
		unsigned int choice = 0;
		cout << "--------------------- CAD Parts Repository System ---------------------" << endl;
		cout << "\t1. Add CAD parts" << endl;
		cout << "\t2. View CAD parts" << endl;
		cout << "\t3. Search CAD parts by its Id number" << endl;
		cout << "\t4. Sort CAD parts by its Diameter" << endl;
		cout << "\t5. Delete CAD parts by its Id number" << endl;
		cout << "\t0. Exit" << endl;
		cout << "-----------------------------------------------------------------------" << endl << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		if (choice == 0)
		{
			if (parts.size() == 0) break;
			// for (auto &it : parts) delete it.get();
			parts.clear();
			break;
		}
		else if (choice == 1)
		{
			try
			{
				addParts(parts);
			}
			catch (const char* s)
			{
				cout << s << "Try again to add parts properly" << endl;
			}
		}
		else if (choice == 2)
		{
			if (parts.size() == 0)
			{
				cout << "No parts avilable" << endl;
				continue;
			}
			viewParts(parts);
		}
		else if (choice == 3)
		{
			if (parts.size() == 0)
			{
				cout << "No parts avilable" << endl;
				continue;
			}
			unsigned int id;
			cout << "Enter CAD Part's id for search: ";
			cin >> id;
			searchPartsbyId(parts, id);
		}
		else if (choice == 4)
		{
			if (parts.size() == 0)
			{
				cout << "No parts avilable" << endl;
				continue;
			}
			vector<shared_ptr<CADparts>> parts2 = parts;
			sort(parts2.begin(), parts2.end(), [](const shared_ptr<CADparts>& cadp1, const shared_ptr<CADparts>& cadp2) {return (cadp1->getDiameter() < cadp2->getDiameter()); });
			cout << "All parts after sort" << endl;
			viewParts(parts2);
		}
		else if (choice == 5)
		{
			if (parts.size() == 0)
			{
				cout << "No parts avilable" << endl;
				continue;
			}
			unsigned int id;
			cout << "Enter CAD Part's id for delete: ";
			cin >> id;
			deletePartsbyId(parts, id);
		}
		else cout << "Wrong number, please check the CAD Parts Repository System list." << endl;
	}
	
	return 0;
}
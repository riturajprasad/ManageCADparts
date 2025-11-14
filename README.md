CADparts (Abstract class)
	  Static PartsId
	  Id
	  Nmae
	  Materials
	  Diameter
	  getId() = 0
	  Constractor
	  Destroctor
	  Copy Constractor
	  Copy Assinment Constractor
	  getName()
	  getMaterial() = 0
	  getDiameter() = 0
	  getPartsId() = 0

Pipes : CADparts
	  length
	  getId() override
	  Constractor
	  Destroctor
	  Copy Constractor
	  Copy Assinment Constractor
	  getMaterial() override
	  getDiameter() override
	  getPartsId() override
	  getLength()

Valves : CADparts
	  opening
	  getId() override
	  Constractor
	  Destroctor
	  Copy Constractor
	  Copy Assinment Constractor
	  getMaterial() override
	  getDiameter() override
	  getPartsId() override
	  getNo_ofOpening()

Elbows : CADparts
	  length
	  getId() override
	  Constractor
	  Destroctor
	  Copy Constractor
	  Copy Assinment Constractor
	  getMaterial() override
	  getDiameter() override
	  getPartsId() override
	  getArea()

Flanges : CADparts
	  quilty
	  getId() override
	  Constractor
	  Destroctor
	  Copy Constractor
	  Copy Assinment Constractor
	  getMaterial() override
	  getDiameter() override
	  getPartsId() override
	  getQuilty()

Main()
  vector<CADparts*>
  1. Add CAD parts
	1. Pipes
	2. Valves
	3. Elbows
	4. Flanges
  2. View CAD parts
  3. Search CAD parts by its Id number
  4. Sort CAD parts by its Diameter
  5. Delete CAD parts by its Id number
  0. Exit

#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Triangle.h"
#include <fstream>





int main() {

	// text file creation
#if 0
	srand(unsigned int(time(nullptr)));

	std::ofstream fout("shapes.txt");

	int numRects = rand() % 501 + 500; //500-1000

	fout << numRects << '\n'; 

	for (int i = 0; i < numRects; i++) {
		fout << rand() % 100 + 1 << '\t' << rand() % 100 + 1 << '\n';
	}

	fout.close();
#endif
	// binary file creation
#if 0
	std::ifstream finText;
	finText.open("shapes.txt");

	std::ofstream foutBinary("shapes.bin", std::ios::binary);

	int numRectsFromFile;
	
	std::vector<Rectangle> rects;

	int height, width;

	// read the header info
	finText >> numRectsFromFile;

	for (int i = 0; i < numRectsFromFile; i++) {
		finText >> height >> width;
		Rectangle rect(height, width);
		rects.push_back(rect);
	}
	finText.close();


	// write out the binary file
	std::ofstream foutBin("shapes.bin", std::ios::binary);

	// write out the header into first
	foutBin.write((const char*)&numRectsFromFile, sizeof(int));

	// write out all of the rectangles
	for (int i = 0; i < rects.size(); i++) {
		foutBin.write((const char*)&rects[i], sizeof(Rectangle));
	}
	



	foutBinary.close();

	std::cout << numRectsFromFile << '\n';
#endif
#if 1 
	std::ifstream finBinary("shapes.bin", std::ios::binary);
	int numRects;
	Rectangle tempRect;

	std::vector<Rectangle> rects;




	finBinary.close();
#endif
	return 0;
}
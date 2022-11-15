#include <iostream>
#include <fstream>
#include "QuadTree.h"

using namespace std;


int main()
{
	ifstream city_File;
	ifstream query_File;

	string city_File_Name;
	string city_Name;
	string query_File_Name;

	int xcoordinate_Map;
	int ycoordinate_Map;
	int xcoordinate_Point;
	int ycoordinate_Point;
	int xcoordinate_Query;
	int ycoordinate_Query;
	int radius_Query;
	int exit_Input;
	

	cout << "Please Write City File Name: ";
	cin >> city_File_Name;

	city_File.open(city_File_Name);

	if (city_File.fail())
	{
		cout << "Opening the file failed!!!" << endl;
		cout << "Exiting..." << endl;
		return 0;
	}

	city_File >> xcoordinate_Map >> ycoordinate_Map;
	cout << xcoordinate_Map << ycoordinate_Map;

	Quad quad(Point(0, 0), Point(xcoordinate_Map, ycoordinate_Map));

	while(!city_File.eof())
	{
		city_File >> city_Name >> xcoordinate_Point >> ycoordinate_Point;
		Node inputCity(Point(xcoordinate_Point, ycoordinate_Point), city_Name);
		quad.insert(&inputCity);
	}

	city_File.close();

	cout << "Cities Output: " << endl;
	

	cout << quad.search(Point(1, 1))->data << endl;

	/*
	//quad_Tree.showTree();

	cout << "Please Write Query File Name: " << endl;
	cin >> query_File_Name;

	query_File.open(query_File_Name);

	if (query_File.fail())
	{
		cout << "Opening the file failed!!!" << endl;
		cout << "Exiting..." << endl;
		return 0;
	}

	while (!EOF)
	{
		query_File >> xcoordinate_Query >> ycoordinate_Query >> radius_Query;
		//quad_Tree.findInRadius(xcoordinate_Query, ycoordinate_Query, radius_Query);
	}

	query_File.close();


	cout << "Program is done..." << endl;
	cout << "Type 1 to exit!!!" << endl;
	cin >> exit_Input;

	while (exit_Input != 1)
	{
		cout << "Type 1 to exit!!!" << endl;
		cin >> exit_Input;
	}
	*/
	return 0;
}
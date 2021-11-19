#include "std_lib_facilities.h"

struct Point{
	double x, y;
};

vector<Point> original_points;
vector<Point> processed_points;

void get_points(int n,vector<Point>& points){
	Point p;
	cout << "Enter" << n << "(x,y) coordinate pairs." << endl;
	for(int i =0;i<n;i++){
		cout << "X: ";
		cin >> p.x;
		cout << "y: ";
		cin >> p.y;
		points.push_back(p);
	}
}

void print_to_console(vector<Point>& Points){
	for(Point& e: Points)
		cout << "(" 
			<< e.x 
			<< ";" 
			<< e.y 
			<< ")" 
			<< endl;
}

void print_file(string file, vector<Point>& points){
	if(ofstream outFile{file})
		for(Point& e: points)
		outFile << "(" 
			<< e.x 
			<< ";" 
			<< e.y 
			<< ")" 
			<< endl;
	else
		cout << "Error, no input file!"<< endl;
}

void read_file(string file, vector<Point>& points){
	string line, a, b;
	Point p;
	if(ifstream inFile{file}){
		while(getline(inFile, line)){
			size_t found = line.find_first_of(";");
			a = line.substr(1, found -1);
			b = line.substr(found + 1, line.size() - 2);

			p.x = stod(a);
			p.y = stod(b);
			points.push_back(p);
		}
	}
	else
		cout << "There is no such file as" << file << endl;
}

bool comp_vectors(vector<Point>& vector1, vector<Point>& vector2){
	if(vector1.size() != vector2.size())return false;
	for(int i = 0;i < vector1.size();i++)
		if(vector1[i].x != vector2[i].x || vector1[i].x != vector2[i].x)
			return false;
	return true;
}


int main(){
	
	get_points(7, original_points);
	cout << "Original points:" << endl;
	print_to_console(original_points);
	print_file("mydata.txt", original_points);
	read_file("mydata.txt", processed_points);

	cout << "Original points:" << endl;
	print_to_console(original_points);
	cout << "Points from file" << endl;
	print_to_console(processed_points);

	if(!comp_vectors(original_points, processed_points))
		cout << "Something went wrong." << endl;
	

	return 0;
}
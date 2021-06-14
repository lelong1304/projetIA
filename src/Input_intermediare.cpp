#include "Input.h"
#include <vector>

class Input_intermediare : public Input {
	private:
	std::vector<double> valeurs;
	
	public:
	Input_intermediare(char label_) {
		this->label = label_;
	}
	
	void add(double x) {
		valeurs.push_back(x);
	}
	
	double operator[] (int i) {
		valeurs.at(i);
	}
	
}
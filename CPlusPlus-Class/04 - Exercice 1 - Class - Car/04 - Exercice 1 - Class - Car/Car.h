#pragma once
#include <string>
class Car
{
private:

	std::string brand_;
	std::string model_;
	int horsePower_;


public:
	std::string getBrand() { return brand_; };
	void setBrand(std::string brand) { brand_ = brand; };
	std::string getmodel() { return model_; };
	void setModel(std::string model) { model_ = model; };
	int gethorsePower() { return horsePower_; };
	void sethorsePower(int horsePower) { horsePower_ = horsePower; };
	
	std::string toString();
	
};


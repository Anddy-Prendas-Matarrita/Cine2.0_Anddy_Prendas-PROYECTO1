#pragma once
#include <iostream>

class Movie {
private:
	std::string name;
	int year;
	int duration;
	std::string country;
	std::string review;
public:
	Movie(std::string, int, int, std::string, std::string);
	~Movie();
	void setName(std::string);
	std::string getName();
	void setYear(int);
	int getYear();
	void setDuration(int);
	int getDuration();
	void setCountry(std::string);
	std::string getCountry();
	void setReview(std::string);
	std::string getReview();
};

#pragma once
#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include "Movie.h"
#include "Room.h"
class Schedule {
private:
	Movie selectedMovie;
	Room selectedRoom;
	std::string date;
	std::string startTime;
	std::string endTime;
public:
	Schedule(Movie,Room,std::string,std::string,std::string);
	~Schedule();
	std::string getDate();
	std::string getStartTime();
	std::string getEndTime();
};
#endif MOVIE_H
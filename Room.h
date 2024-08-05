#pragma once
#ifndef ROOM_H
#define ROOM_H

class Room {
private:
	int number;
	int amountOfSeats;
	int price;
public:
	Room();
	Room(int,int,int);
	~Room();
	void setNumber(int);
	int getNumber();
	void setAmountOfSeats(int);
	int getAmountOfSeats();
	void setPrice(int);
	int getPrice();
};
#endif ROOM_H
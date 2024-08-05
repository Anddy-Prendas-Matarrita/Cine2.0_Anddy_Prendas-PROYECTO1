#include "Room.h"
Room::Room() {

}
Room::Room(int _number, int _amountOfSeats, int _price) {
	number = _number;
	amountOfSeats = _amountOfSeats;
	price = _price;
}
Room::~Room() {

}
void Room::setNumber(int _number) {
	number = _number;
}
int Room::getNumber() {
	return number;
}
void Room::setAmountOfSeats(int _amountOfSeats) {
	amountOfSeats = _amountOfSeats;
}
int Room::getAmountOfSeats() {
	return amountOfSeats;
}
void Room::setPrice(int _price) {
	price = _price;
}
int Room::getPrice() {
	return price;
}
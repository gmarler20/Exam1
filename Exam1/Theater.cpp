#include "stdafx.h"
#include "Theater.h"
#include "Movie.h"
#include <string>
#include <Iostream>
using namespace std;


Theater::Theater(string Name, string Phone)
{
	Name = "Garland";
	Phone = "5096801123";
}

void Theater::AddMovie(Movie& Movie) {
	ShowTime = Movie.GetShowTime();
	Title = Movie.GetTitle();
	Genre = Movie.GetGenre();
}

string Theater::GetMovieForHour(int hour) {
	if (hour == ShowTime)
		return Title;
	else
		return "";
}

int Theater::GetShowTimeForGenre(string Genre1) {
	if (Genre1 == Genre)
		return ShowTime;
	else
		return -1;
}

int Theater::SetPopcornPrice() {

	Popcorn = 5;
}

int Theater::GetPopcornPrice() const {

	return Popcorn;
}

int Theater::SetCokePrice() {

	Coke = 3;
}
int Theater::GetCokePrice() const {

	return Coke;
}


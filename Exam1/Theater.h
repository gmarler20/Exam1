#ifndef THEATER_H

#endif THEATER_H
#include <string>


class Theater
{
public:
	Theater(string name, string Phone);

	void AddMovie(Movie& Movie);

	string GetMovieForHour(int hour);

	int GetShowTimeForGenre(string Genre1);

	int SetPopcornPrice();

	int GetPopcornPrice() const ;

	int SetCokePrice();
	int GetCokePrice() const;

	private:
	int ShowTime;
	string Title;
	string Genre;
	int Popcorn;
	int Coke;
	
};


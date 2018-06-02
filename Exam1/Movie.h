#pragma once
#ifndef MOVIE_H

#endif MOVIE_H

#include "Movie.cpp"
class Movie
{
public:
	Movie();
	Movie(string Title, string Genre, int ShowTime);

	
	string setTitle(string x);
	string GetTitle();



	string GetGenre();

	string setGenre(string y);

	int setShowTime();
	int GetShowTime();

	int setShowTime(int z);

	

private:
	string Title;
	string Genre;
	int ShowTime;
};


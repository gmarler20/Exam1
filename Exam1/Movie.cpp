#include "stdafx.h"
#include "Movie.h"
#include <string>
#include <iostream>
using namespace std;


Movie::Movie()
{
	Title = "Lord of the Rings ";
	Genre = "Action ";
	ShowTime = 9;

}



Movie::Movie(string Title = "L", string Genre = "Comedy", int ShowTime = 1) {
	
	setTitle(Title);
	setGenre(Genre);
	setShowTime(ShowTime);
}

string Movie::GetTitle()
{
	return Title;
}

string Movie::GetGenre()
{
	return Genre;
}

int Movie::GetShowTime()
{
	return ShowTime;
}

int Movie::setShowTime()
{
	return 0;
}

string Movie::setTitle(string x) {

	Title = x;
}

string Movie::setGenre(string y) {
	Genre = y;
}

int Movie::setShowTime(int z) {
	ShowTime = z;
}
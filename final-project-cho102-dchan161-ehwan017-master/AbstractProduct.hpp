#ifndef _ABSTRACTPLAYLIST_HPP_
#define _ABSTRACTPLAYLIST_HPP_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Playlist {
    public:
        Playlist() {};
        virtual string getTitle() = 0;
        virtual vector<string> getSongs() = 0;
        virtual vector<string> getArtists() = 0;
        virtual vector<double> getTimes() = 0;

    private:
	string title;
	vector<string> *song;
	vector<string> *artist;
	vector<double> *time;
};

#endif //_ABSTRACTPLAYLIST_HPP_ 

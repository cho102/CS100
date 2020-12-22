#ifndef _PLAYLISTSUBCLASSES_HPP_
#define _PLAYLISTSUBCLASSES_HPP_

#include "AbstractProduct.hpp"

#include <iostream>
#include <vector>

using namespace std;

class HipHopPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};

    public:
        HipHopPlaylist() {};
        HipHopPlaylist(string name){
	    this->title = name;
	    songs = {"On Me", "Tyler Herro", "Drankin N Smokin", "Whoopty", "Errbody", "Moonwalking in Calabasas", "Hello", "Runnin", "Onna Come Up", "Practice", "The Parables", "That's It", "Losses", "Handgun", "Grey Area", "Body"};
	    artists = {"Lil Baby", "Jack Harlow", "Future, Lil Uzi Vert", "CJ", "Lil Baby", "DDG, Blueface", "Pop Smoke, A Boogie Wit da Hoodie", "21 Savage, Metro Boomin", "Lil Eazzyy", "DaBaby", "Cordae", "Future, Lil Uzi Vert", "Lil Tjay", "DaBaby, NoCap, Polo G", "2 Chainz", "Megan Thee Stallion"};
	    times = {2.16, 2.36, 3.34, 2.03, 3.31, 2.50, 3.11, 3.16, 2.08, 2.03, 3.14, 3.49, 3.16, 2.34, 2.52, 2.51};
	}

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class EDMPlaylist : public Playlist {
    private: 
        string title;
	vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};

    public:
        EDMPlaylist() {};
        EDMPlaylist(string name){
	    this->title = name;
	    songs = {"Just For A Moment", "Moments", "Lose Somebody", "Bye Bye", "Otherside", "Take Me", "Over Getting Over You", "Superstar", "In Flames", "All I Got", "Hesitate", "Better With You", "Always", "Alone", "Let You Down"};
            artists = {"Gryffin, Iselin", "MitiS, Adara", "Kygo, OneRepublic", "Gryffin, Ivy Adara", "Elephante, Nevve", "William Black, Matte, RUNN", "Said the Sky, Matthew Koma", "Said the Sky, Dabin, Linn", "Dablin, Lexi Norton", "Said the Sky, Kwesi", "The Spacies, ToWonder", "3LAU, Justin Caruso, Iselin", "The Him", "ARMNHMR, Nolan van Lith, Dylan Mattew", "Stonebank, Danyka Nadeau"};
            times = {4.13, 4.38, 3.20, 3.30, 3.58, 3.12, 3.41, 3.26, 3.25, 5.16, 3.09, 3.13, 3.13, 3.57, 4.13};
	}

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class PopPlaylist : public Playlist {
    private: 
        string title;
	vector<string> songs{};
	vector<string> artists{};
	vector<double> times{};
    public:
        PopPlaylist() {};
        PopPlaylist(string name){
	    this->title = name;
	    songs = {"Positions", "Levitating", "Therefore I Am", "Monster", "Prisoner", "Blinding Lights", "Mood", "34+35", "Lonely", "You Broke Me First", "Paradise", "Take You Dancing", "Angels Like You", "Holy", "The Business"};
	    artists = {"Ariana Grande", "Dua Lipa, DaBaby", "Billie Eilish", "Shawn Mendes, Justin Bieber", "Miley Cyrus, Dua Lipa", "The Weeknd, ROSALIA", "24kGoldn, Iann Dior", "Ariana Grande", "Justin Bieber, Benny Blanco", "Tate McRae", "MEDUZA, Dermot Kennedy", "Jason Derulo", "Miley Cyrus", "Justin Bieber, Chance the Rapper", "Tiesto"};
	    times = {2.52, 3.23, 2.54, 2.59, 2.49, 3.36, 2.21, 2.54, 2.29, 2.49, 2.48, 3.10, 3.16, 3.32, 2.44};
	};

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class LoFiPlaylist : public Playlist {
    private: 
        string title;
	vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};


    public:
        LoFiPlaylist() {};
        LoFiPlaylist(string name){
	    this->title = name;
	    songs = {"Gasteria", "Stripe Two", "Crooked Elements", "Top Floor", "Fly Away", "Seek Tone", "Hazy Days", "A Promise", "Reassuring Drops", "H2", "Bleepy Booper", "Toro", "Alleviate", "City Life", "Alien Signals" };
	    artists = {"Gaura", "Tom Oswald", "Kelly Kane", "Moody Bit", "8teen, Versus Beats", "Jon Timber", "Ekolon", "Tr_at", "Jes Nil", "Hattab", "Lysergic Teaparty", "En Rie", "Zifon", "ROOM7", "Lo-Fi Like, Simax"};
	    times = {1.08, 1.27, 1.38, 1.44, 2.43, 1.39, 1.22, 1.59, 1.19, 1.51, 1.44, 1.26, 1.26, 1.48, 2.06};

	};

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class RnBPlaylist : public Playlist {
    private: 
        string title;
	vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};


    public:
        RnBPlaylist() {};
        RnBPlaylist(string name) {
	    this->title = name;
	    songs = {"Not Another Love Song", "Damage", "Hit Different", "Wake Up Love", "Pick Up Your Feelings", "Sending My Love", "Outta Time", "Your Turn", "PERSIAN RUGS", "Rain", "Bad Habits", "Borderline", "All About You", "U 2 Luv", "Lost One"};
	    artists = {"Ella Mai", "H.E.R.", "SZA, The Neptunes, Parrell Williams", "Teyana Tayor, Iman", "Jazmine Sullivan", "Chloe x Halle", "Bryson Tiller, Drake", "TY Dolla Sign, 6LACK", "PARTYNEXTDOOR", "Trey Songz, Swae Lee", "Usher", "Brandy", "Leon Bridges, Lucky Daye", "Ne-Yo, Jeremih", "Jazmine Sullivan"};
	    times = {3.38, 3.43, 3.22, 3.35, 3.52, 2.53, 3.19, 5.2, 2.54, 3.44, 4.17, 5.12, 3.0, 3.06, 3.0};
	};

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class NaturalPlaylist : public Playlist {
    private: 
        string title;
	vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};


    public:
        NaturalPlaylist() {};
        NaturalPlaylist(string name){
	    this->title = name;
	    songs = {"Suburban Forest Rain 1", "Birds in Forest Rainfall", "Quiet Rain in River", "Power and Meditation", "Forest Rain", "Empowering Rain", "Birds by the River", "Small Forest River", "Dripping Wet Leaves and Thunder", "Atlanta Rain", "Rain in the Woods", "Bustling River Sounds", "Chill Waves & Wind in Leaves", "Bird Showers", "Smoothe Suburban Forest Rain 2"};
            artists = {"Aquagirl", "Zen Master", "Stereo Outdoor Sampling", "Yuhe", "Rain Recordings", "Four Winds", "Blueberry House Meditations", "The Relaxing Sounds of Swedish Nature", "Wonderful Escape", "Natsound", "Outdoor Field Recorders", "Rivers and Streams", "Pinetree Way", "Creatress", "Mori Desu"};
            times = {2.18, 3.24, 2.0, 3.0, 2.50, 2.52, 2.38, 3.32, 3.49, 2.5, 3.28, 2.5, 4.01, 2.22, 2.34};
	};

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

#endif

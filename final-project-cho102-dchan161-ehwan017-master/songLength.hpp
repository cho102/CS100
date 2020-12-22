#ifndef _SONG_LENGTH_HPP
#define _SONG_LENGTH_HPP
#include "strategy.hpp"
#include "PlaylistSubclasses.hpp"

#include <iostream>
#include <vector>

class songLength : public Strategy{
    public:
	songLength() {};
        songLength(HipHopPlaylist* playlist){
            playlistH = playlist;
            length = playlistH->getTimes();
    	    artist = playlistH->getArtists();
    	    song = playlistH->getSongs();
        }

        songLength(EDMPlaylist* playlist){
            playlistE = playlist;
            length = playlistE->getTimes();
            artist = playlistE->getArtists();
            song = playlistE->getSongs();
        }

        songLength(PopPlaylist* playlist){
            playlistP = playlist;
            length = playlistP->getTimes();
    	    artist = playlistP->getArtists();
    	    song = playlistP->getSongs();
        }

        songLength(LoFiPlaylist* playlist){
            playlistL = playlist;
            length = playlistL->getTimes();
    	    artist = playlistL->getArtists();
    	    song = playlistL->getSongs();
        }

        songLength(RnBPlaylist* playlist){
            playlistR = playlist;
            length = playlistR->getTimes();
    	    artist = playlistR->getArtists();
    	    song = playlistR->getSongs();
        }

        songLength(NaturalPlaylist* playlist){
            playlistN = playlist;
            length = playlistN->getTimes();
    	    artist = playlistN->getArtists();
    	    song = playlistN->getSongs();
        }

	void display(){			
		for(unsigned int i = 0; i < song.size(); i++){
			cout << song.at(i) << "    " << artist.at(i) << "    " << length.at(i) << endl;
		}
	}
	
	void selectionSort(){
		for (int i = 0; i < length.size() - 1; ++i) {
			int min = i;
			for (int j = i+1; j < length.size(); ++j) {
				if (length.at(min) > length.at(j)) {
					min = j;
				}
			}
			if (min != i){
					//swap(length.at(j), length.at(min));
				double lengthTemp = length.at(i);
            			length.at(i) =  length.at(min);
            			length.at(min) = lengthTemp;

					//swap(artist.at(j), artist.at(min));
				string artistTemp = artist.at(i);
                                artist.at(i) = artist.at(min);
                                artist.at(min) = artistTemp;


					//swap(song.at(j), song.at(min));
				string songTemp = song.at(i);
                                song.at(i) =  song.at(min);
                                song.at(min) = songTemp;
			}
		}

	}

	vector<string> getS(){
            return song;
        }

        vector<string> getA(){
        	return artist;
        }

        vector<double> getL(){
        	return length;
        }

    private:
		HipHopPlaylist* playlistH;
		EDMPlaylist* playlistE;
		PopPlaylist* playlistP;
		LoFiPlaylist* playlistL;
		RnBPlaylist* playlistR;
		NaturalPlaylist* playlistN;
		vector<double> length;
        vector<string> artist;
        vector<string> song;
	
};
#endif //_SONG_LENGTH_HPP_
	
	   	

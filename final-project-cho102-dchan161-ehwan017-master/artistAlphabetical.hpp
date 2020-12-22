#ifndef _ARTIST_ALPHABETICAL_HPP
#define _ARTIST_ALPHABETICAL_HPP
#include "strategy.hpp"

#include <iostream>
#include <vector>
  
class artistAlphabetical : public Strategy{
    public:
        artistAlphabetical() {} ;
        artistAlphabetical(HipHopPlaylist* playlist){
            playlistH = playlist;
            length = playlistH->getTimes();
    	    artist = playlistH->getArtists();
    	    song = playlistH->getSongs();
        }

        artistAlphabetical(EDMPlaylist* playlist){
            playlistE = playlist;
	    length = playlistE->getTimes();
    	    artist = playlistE->getArtists();
    	    song = playlistE->getSongs();
        }

        artistAlphabetical(PopPlaylist* playlist){
            playlistP = playlist;
            length = playlistP->getTimes();
    	    artist = playlistP->getArtists();
    	    song = playlistP->getSongs();
        }

        artistAlphabetical(LoFiPlaylist* playlist){
            playlistL = playlist;
            length = playlistL->getTimes();
    	    artist = playlistL->getArtists();
    	    song = playlistL->getSongs();
        }

        artistAlphabetical(RnBPlaylist* playlist){
            playlistR = playlist;
            length = playlistR->getTimes();
    	    artist = playlistR->getArtists();
    	    song = playlistR->getSongs();
        }

        artistAlphabetical(NaturalPlaylist* playlist){
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
	void insertionSort() {

        for(unsigned int i = 1; i < artist.size(); i++) {
            int currIndex = i;

            while (currIndex > 0 && artist.at(currIndex - 1) > artist.at(currIndex)) {
                string artistTemp = artist.at(currIndex);
                string songTemp = song.at(currIndex);
                double timeTemp = length.at(currIndex);

                artist.at(currIndex) = artist.at(currIndex - 1);
                song.at(currIndex) = song.at(currIndex - 1);
                length.at(currIndex) = length.at(currIndex - 1);

                artist.at(currIndex - 1) = artistTemp;
                song.at(currIndex - 1) = songTemp;
                length.at(currIndex - 1) = timeTemp;

                currIndex--;
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
#endif //_ARTIST_ALPHABETICAL_HPP_ 



#ifndef _SONG_ALPHABETICAL_HPP_
#define _SONG_ALPHABETICAL_HPP_
#include "strategy.hpp"

#include <iostream>
#include <vector>
  
class songAlphabetical : public Strategy{
    public:
        songAlphabetical() {} ;
        songAlphabetical(HipHopPlaylist* playlist){
            playlistH = playlist;
            length = playlistH->getTimes();
    	    artist = playlistH->getArtists();
    	    song = playlistH->getSongs();
        }

        songAlphabetical(EDMPlaylist* playlist){
            playlistE = playlist;
            length = playlistE->getTimes();
    	    artist = playlistE->getArtists();
    	    song = playlistE->getSongs();
        }

        songAlphabetical(PopPlaylist* playlist){
            playlistP = playlist;
            length = playlistP->getTimes();
    	    vector<string> artist = playlistP->getArtists();
    	    vector<string> song = playlistP->getSongs();
        }

        songAlphabetical(LoFiPlaylist* playlist){
            playlistL = playlist;
            length = playlistL->getTimes();
    	    artist = playlistL->getArtists();
    	    song = playlistL->getSongs();
        }

        songAlphabetical(RnBPlaylist* playlist){
            playlistR = playlist;
            length = playlistR->getTimes();
    	    artist = playlistR->getArtists();
    	    song = playlistR->getSongs();
        }

        songAlphabetical(NaturalPlaylist* playlist){
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

    void bubbleSort(){
        int j, k;
        for (int i = song.size(); i > 0; i--) {
            for (j = 0, k = 1; k < i; j++, k++){
               if (song.at(j) > song.at(k)) {
                   string songTemp= song.at(j);
                   double timeTemp= length.at(j);
                   string artistTemp= artist.at(j);

                   song.at(j) = song.at(k);
                   length.at(j) = length.at(k);
                   artist.at(j) = artist.at(k);

                   song.at(k) = songTemp;
                   length.at(k) = timeTemp;
                   artist.at(k) = artistTemp;
               }

            }
        }

    }

    vector<string> getS(){
        return song;
    }

    vector<string>getA(){
        return artist;
    }

    vector<double>getL(){
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


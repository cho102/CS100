#ifndef _FACTORYTESTS_HPP_
#define _FACTORYTESTS_HPP_

#include "gtest/gtest.h"

#include "ConcreteFactory.hpp"
#include "AbstractProduct.hpp"
#include "PlaylistSubclasses.hpp"

#include <iostream>
#include <string>

using namespace std;

TEST(AddPlaylist, AddHipHop){
    string hip1 = "hip";
    ConcreteFactory* test = new ConcreteFactory();
    HipHopPlaylist* x = test->CreateHipHopPlaylist(hip1);

    EXPECT_EQ(x->getTitle(), hip1);
}

TEST(AddPlaylist, AddEDM){
    string edm1 = "edm";
    ConcreteFactory* test = new ConcreteFactory();
    EDMPlaylist* x = test->CreateEDMPlaylist(edm1);

    EXPECT_EQ(x->getTitle(), edm1);
}

TEST(AddPlaylist, AddPop){
    string pop1 = "pop";
    ConcreteFactory* test = new ConcreteFactory();
    PopPlaylist* x = test->CreatePopPlaylist(pop1);

    EXPECT_EQ(x->getTitle(), pop1);
}

TEST(AddPlaylist, AddLoFi){
    string lofi1 = "lofi";
    ConcreteFactory* test = new ConcreteFactory();
    LoFiPlaylist* x = test->CreateLoFiPlaylist(lofi1);

    EXPECT_EQ(x->getTitle(), lofi1);
}

TEST(AddPlaylist, AddRnB){
    string rnb1 = "rnb";
    ConcreteFactory* test = new ConcreteFactory();
    RnBPlaylist* x = test->CreateRnBPlaylist(rnb1);

    EXPECT_EQ(x->getTitle(), rnb1);
}

TEST(AddPlaylist, AddNatural){
    string natural1 = "rnb";
    ConcreteFactory* test = new ConcreteFactory();
    NaturalPlaylist* x = test->CreateNaturalPlaylist(natural1);

    EXPECT_EQ(x->getTitle(), natural1);
}

TEST(AddSongs, AddHipHopSong){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "On Me");
}

TEST(AddSongs, AddHipHopArtist){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "CJ");
}

TEST(AddSongs, AddHipHopTime){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 2.160000);
}

TEST(AddSongs, AddHipHopSongLAST){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(15), "Body");
}

TEST(AddSongs, AddHipHopArtistLAST){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(15), "Megan Thee Stallion");
}

TEST(AddSongs, AddHipHopTimeLAST){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(15), 2.510000);
}

TEST(AddSongs, AddEDMSong){
    string x = "playlist";
    EDMPlaylist* test = new EDMPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Just For A Moment");
}

TEST(AddSongs, AddEDMArtist){
    string x = "playlist";
    EDMPlaylist* test = new EDMPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Gryffin, Ivy Adara");
}

TEST(AddSongs, AddEDMTime){
    string x = "playlist";
    EDMPlaylist* test = new EDMPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 4.130000);
}

TEST(AddSongs, AddEDMSongLAST){
    string x = "playlist";
    EDMPlaylist* test = new EDMPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Let You Down");
}

TEST(AddSongs, AddEDMArtistLAST){
    string x = "playlist";
    EDMPlaylist* test = new EDMPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Stonebank, Danyka Nadeau");
}

TEST(AddSongs, AddEDMTimeLAST){
    string x = "playlist";
    EDMPlaylist* test = new EDMPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 4.130000);
}

TEST(AddSongs, AddPopSong){
    string x = "playlist";
    PopPlaylist* test = new PopPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Positions");
}

TEST(AddSongs, AddPopArtist){
    string x = "playlist";
    PopPlaylist* test = new PopPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Shawn Mendes, Justin Bieber");
}

TEST(AddSongs, AddPopTime){
    string x = "playlist";
    PopPlaylist* test = new PopPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 2.520000);
}

TEST(AddSongs, AddPopSongLAST){
    string x = "playlist";
    PopPlaylist* test = new PopPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "The Business");
}

TEST(AddSongs, AddPopArtistLAST){
    string x = "playlist";
    PopPlaylist* test = new PopPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Tiesto");
}

TEST(AddSongs, AddPopTimeLAST){
    string x = "playlist";
    PopPlaylist* test = new PopPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 2.440000);
}

TEST(AddSongs, AddLofiSong){
    string x = "playlist";
    LoFiPlaylist* test = new LoFiPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Gasteria");
}

TEST(AddSongs, AddLofiArtist){
    string x = "playlist";
    LoFiPlaylist* test = new LoFiPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Moody Bit");
}

TEST(AddSongs, AddLofiTime){
    string x = "playlist";
    LoFiPlaylist* test = new LoFiPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 1.080000);
}

TEST(AddSongs, AddLofiSongLAST){
    string x = "playlist";
    LoFiPlaylist* test = new LoFiPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Alien Signals");
}

TEST(AddSongs, AddLofiArtistLAST){
    string x = "playlist";
    LoFiPlaylist* test = new LoFiPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Lo-Fi Like, Simax");
}

TEST(AddSongs, AddLofiTimeLAST){
    string x = "playlist";
    LoFiPlaylist* test = new LoFiPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 2.060000);
}

TEST(AddSongs, AddRnBSong){
    string x = "playlist";
    RnBPlaylist* test = new RnBPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Not Another Love Song");
}

TEST(AddSongs, AddRnBArtist){
    string x = "playlist";
    RnBPlaylist* test = new RnBPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Teyana Tayor, Iman");
}

TEST(AddSongs, AddRnBTime){
    string x = "playlist";
    RnBPlaylist* test = new RnBPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 3.380000);
}

TEST(AddSongs, AddRnBSongLAST){
    string x = "playlist";
    RnBPlaylist* test = new RnBPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Lost One");
}

TEST(AddSongs, AddRnBArtistLAST){
    string x = "playlist";
    RnBPlaylist* test = new RnBPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Jazmine Sullivan");
}

TEST(AddSongs, AddRnBTimeLAST){
    string x = "playlist";
    RnBPlaylist* test = new RnBPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 3.000000);
}

TEST(AddSongs, AddNaturalSong){
    string x = "playlist";
    NaturalPlaylist* test = new NaturalPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Suburban Forest Rain 1");
}

TEST(AddSongs, AddNaturalArtist){
    string x = "playlist";
    NaturalPlaylist* test = new NaturalPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Yuhe");
}

TEST(AddSongs, AddNaturalTime){
    string x = "playlist";
    NaturalPlaylist* test = new NaturalPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 2.180000);
}

TEST(AddSongs, AddNaturalSongLAST){
    string x = "playlist";
    NaturalPlaylist* test = new NaturalPlaylist(x);
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Smoothe Suburban Forest Rain 2");
}

TEST(AddSongs, AddNaturalArtistLAST){
    string x = "playlist";
    NaturalPlaylist* test = new NaturalPlaylist(x);
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Mori Desu");
}

TEST(AddSongs, AddNaturalTimeLAST){
    string x = "playlist";
    NaturalPlaylist* test = new NaturalPlaylist(x);
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 2.340000);
}



#endif //_FACTORY_TESTS_HPP
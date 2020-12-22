#ifndef __STRATEGY_TESTS_HPP__
#define __STRATEGY_TESTS_HPP__

#include "gtest/gtest.h"

#include "strategy.hpp"
#include "songLength.hpp"
#include "PlaylistSubclasses.hpp"
#include "artistAlphabetical.hpp"
#include "songAlphabetical.hpp"
#include "songLength.hpp"

TEST(artist, HHsongTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Grey Area");  //after alphabetical i think 2 Chainz should be first artist so Grey Area first?
}
TEST(artist, HHartistTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "2 Chainz");  //after alphabetical i think 2 Chainz should be first artist?
}
TEST(artist, HHlengthTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_DOUBLE_EQ(result, 2.520000);  //after alphabetical i think 2 Chainz should be first artist?
}

TEST(artist, EsongTest){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Better With You"); 
}
TEST(artist, EartistTest){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "3LAU, Justin Caruso, Iselin");  
}
TEST(artist, ElengthTest){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 3.130000);  
}

TEST(artist, PsongTest){
     string x = "playlist";
     PopPlaylist* test = new PopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Mood");  
}
TEST(artist, PartistTest){
     string x = "playlist";
     PopPlaylist* test = new PopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "24kGoldn, Iann Dior");  
}
TEST(artist, PlengthTest){
     string x = "playlist";
     PopPlaylist* test = new PopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 2.210000);  
}

TEST(artist, LsongTest){
     string x = "playlist";
     LoFiPlaylist* test = new LoFiPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Fly Away");  
}
TEST(artist, LartistTest){
     string x = "playlist";
     LoFiPlaylist* test = new LoFiPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "8teen, Versus Beats");  
}
TEST(artist, LlengthTest){
     string x = "playlist";
     LoFiPlaylist* test = new LoFiPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 2.430000);  
}

TEST(artist, RsongTest){
     string x = "playlist";
     RnBPlaylist* test = new RnBPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Borderline");  
}
TEST(artist, RartistTest){
     string x = "playlist";
     RnBPlaylist* test = new RnBPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "Brandy");  
}
TEST(artist, RlengthTest){
     string x = "playlist";
     RnBPlaylist* test = new RnBPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 5.120000);  
}

TEST(artist, NsongTest){
     string x = "playlist";
     NaturalPlaylist* test = new NaturalPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Suburban Forest Rain 1");  
}
TEST(artist, NartistTest){
     string x = "playlist";
     NaturalPlaylist* test = new NaturalPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "Aquagirl");  
}
TEST(artist, NlengthTest){
     string x = "playlist";
     NaturalPlaylist* test = new NaturalPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 2.180000);  
}

TEST(time, HHsongTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     songLength* test1 = new songLength(test);
     test1->selectionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Whoopty");  
}
TEST(time, HHartistTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     songLength* test1 = new songLength(test);
     test1->selectionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "CJ"); 
}
TEST(time, HHlengthTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     songLength* test1 = new songLength(test);
     test1->selectionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 2.030000);  
}

 TEST(time, EsongTest){
      string x = "playlist";
      EDMPlaylist* test = new EDMPlaylist(x);

      songLength* test1 = new songLength(test);
      test1->selectionSort();
      vector<string> v = test1->getS();
      string result = v.at(0);

     EXPECT_EQ(result, "Hesitate");  
 }
 TEST(time, EartistTest){
      string x = "playlist";
      EDMPlaylist* test = new EDMPlaylist(x);

      songLength* test1 = new songLength(test);
      test1->selectionSort();
      vector<string> v = test1->getA();
      string result = v.at(0);

     EXPECT_EQ(result, "The Spacies, ToWonder");  
 }
 TEST(time, ElengthTest){
      string x = "playlist";
      EDMPlaylist* test = new EDMPlaylist(x);

      songLength* test1 = new songLength(test);
      test1->selectionSort();
      vector<double> v = test1->getL();
      double result = v.at(0);

     EXPECT_EQ(result, 3.090000);  
 }

 TEST(time, PsongTest){
      string x = "playlist";
      PopPlaylist* test = new PopPlaylist(x);

      songLength* test1 = new songLength(test);
      test1->selectionSort();
      vector<string> v = test1->getS();
      string result = v.at(0);

     EXPECT_EQ(result, "Mood");  
 }
TEST(time, PartistTest){
     string x = "playlist";
     PopPlaylist* test = new PopPlaylist(x);

     songLength* test1 = new songLength(test);
     test1->selectionSort();
      vector<string> v = test1->getA();
      string result = v.at(0);

     EXPECT_EQ(result, "24kGoldn, Iann Dior");  
}
TEST(time, PlengthTest){
     string x = "playlist";
     PopPlaylist* test = new PopPlaylist(x);

     songLength* test1 = new songLength(test);
     test1->selectionSort();
      vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 2.210000);  
}

TEST(song, HHsongTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     songAlphabetical* test1 = new songAlphabetical(test);
     test1->bubbleSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Body");  
}
TEST(song, HHartistTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     songAlphabetical* test1 = new songAlphabetical(test);
     test1->bubbleSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "Megan Thee Stallion");  
}
TEST(song, HHlengthTest){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     songAlphabetical* test1 = new songAlphabetical(test);
     test1->bubbleSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 2.510000);  
}

TEST(song, EsongTest){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     songAlphabetical* test1 = new songAlphabetical(test);
     test1->bubbleSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "All I Got");  
}
TEST(song, EartistTest){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     songAlphabetical* test1 = new songAlphabetical(test);
     test1->bubbleSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "Said the Sky, Kwesi");  
}
TEST(song, ElengthTest){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     songAlphabetical* test1 = new songAlphabetical(test);
     test1->bubbleSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_EQ(result, 5.160000);  
}




#endif //__STRATEGY_TESTS_HPP

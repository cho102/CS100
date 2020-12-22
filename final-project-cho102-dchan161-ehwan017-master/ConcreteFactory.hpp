#ifndef _CONCRETEFACTORY_HPP_
#define _CONCRETEFACTORY_HPP_

#include "AbstractFactory.hpp"
#include "AbstractProduct.hpp" 
#include "PlaylistSubclasses.hpp"
#include <iostream> 

using namespace std; 

class ConcreteFactory : public AbstractFactory {
    public:
        ConcreteFactory() : AbstractFactory() {};

        HipHopPlaylist* CreateHipHopPlaylist(string name){
            HipHopPlaylist* creation = new HipHopPlaylist(name); 
            return creation; 
        }

        EDMPlaylist* CreateEDMPlaylist(string name){
            EDMPlaylist* creation = new EDMPlaylist(name); 
            return creation; 
        }

        PopPlaylist* CreatePopPlaylist(string name){
            PopPlaylist* creation = new PopPlaylist(name); 
            return creation; 
        }

        LoFiPlaylist* CreateLoFiPlaylist(string name){
            LoFiPlaylist* creation = new LoFiPlaylist(name); 
            return creation; 
        }

        RnBPlaylist* CreateRnBPlaylist(string name){
            RnBPlaylist* creation = new RnBPlaylist(name); 
            return creation; 
        }

        NaturalPlaylist* CreateNaturalPlaylist(string name){
            NaturalPlaylist* creation = new NaturalPlaylist(name); 
            return creation; 
        }

};

#endif //_CONCRETEFACTORY_HPP_

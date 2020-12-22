#ifndef _ABSTRACTFACTORY_HPP_
#define _ABSTRACTFACTORY_HPP_

#include <iostream> 
#include <string>

#include "AbstractProduct.hpp"
#include "PlaylistSubclasses.hpp"

using namespace std; 

class AbstractFactory {
public:
    // AbstractFactory(string type, string name){
    //   if (type == "h"){
    //     return CreateHipHopPlaylist(name);
    //   }

    //   if (type == "e"){
    //     CreateEDMPlaylist(name);
    //   }

    //   if (type == "p"){
    //     CreatePopPlaylist(name);
    //   }

    //   if (type == "l"){
    //     CreateLoFiPlaylist(name);
    //   }

    //   if (type == "r"){
    //     CreateRnBPlaylist(name);
    //   }

    //   if (type == "n"){
    //     CreateNaturalPlaylist(name);
    //   }
    // }
    AbstractFactory() {};
    virtual HipHopPlaylist* CreateHipHopPlaylist(string name)  = 0;
    virtual EDMPlaylist* CreateEDMPlaylist(string name) = 0;
    virtual PopPlaylist* CreatePopPlaylist(string name) = 0;
    virtual LoFiPlaylist* CreateLoFiPlaylist(string name) = 0;
    virtual RnBPlaylist* CreateRnBPlaylist(string name) = 0;
    virtual NaturalPlaylist* CreateNaturalPlaylist(string name) = 0;
};

#endif //_ABSTRACTFACTORY_HPP_

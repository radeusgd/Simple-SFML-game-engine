/* 
 * File:   GameObject.hpp
 * Author: radek
 *
 * Created on 29 marzec 2014, 17:43
 */

#ifndef GAMEOBJECT_HPP
#define	GAMEOBJECT_HPP

#include <sstream>
#include <SFML/Graphics/RenderWindow.hpp>
class ResourceManager;
class GameObject;
#include "ResourceManager.hpp"

class GameObject {
public:
    GameObject();
    virtual void draw(sf::RenderWindow& window)=0;
    virtual void update(float dt)=0;
    
    static GameObject* create(ResourceManager* rm, std::stringstream& in);
    
    inline bool shouldBeRemoved(){return shouldbedestroyed;}
    virtual ~GameObject();
protected:
    inline void destroy(){shouldbedestroyed=true;}
private:
    bool shouldbedestroyed = false;

};

#endif	/* GAMEOBJECT_HPP */

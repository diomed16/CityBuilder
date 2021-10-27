#ifndef GAME_STATE_EDITOR_HPP_INCLUDED
#define GAME_STATE_EDITOR_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "game_state.hpp"




class GameStateEditor : public GameState
{



private:
    sf::View gameView;
    sf::View guiView;
    public:
     virtual void draw(const float dt);
         virtual void update(const float dt);
    virtual void handleInput();

    GameStateEditor(Game* game);
};
#endif // GAME_STATE_EDITOR_HPP_INCLUDED

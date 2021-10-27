#include <SFML/Graphics.hpp>

#include "game_state_start.hpp"
#include "game_state_editor.hpp"
#include "game_state.hpp"



void GameStateStart::draw(const float dt)
{
    this->game->window.setView(this->view);
    this->game->window.clear(sf::Color::Black);
    this->game->window.draw(this->game->background);
    return;
}

void GameStateStart::update(const float dt)
{

}

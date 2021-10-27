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
void GameStateStart::handleInput(const float dt)
{
    sf::Event event;
    while(this->window.pollEvent(event))
    {
    switch(event.type)
    {
        case sf:Event::Closed:
            {
                this->window.close();
                break;
            }
        case sf::Event::Resized:
            {
                this->view.setSize(event.size.width, event.size.height);
                this->game->background.setPosition(this->game->window.mapPixelToCoodrs(sf::Vector2i(0,0));
                this->
            }
    }
        
}

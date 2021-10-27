#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <stack>

#include <SFML/Graphics.hpp>

class GameState;
class Game
    {

public:
    std::stack<GameState*> states;
    sf::RenderWindow window;
    void pushState(GameState* state);
    void popState();
    void ChangeState(GameState* state);
    GameState* peekState();

    void gameLoop();
    Game();
    ~Game();

};

#endif // GAME_HPP_INCLUDED

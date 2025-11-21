#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main() {
    // VideoMode now expects sf::Vector2u
    sf::RenderWindow window(sf::VideoMode({800, 600}), "DFA SQL Injection Visualizer");

    while (window.isOpen()) {
        // pollEvent now returns std::optional<Event>
        while (auto eventOpt = window.pollEvent()) {
            auto& event = *eventOpt; // get the actual event

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        // Draw DFA states here later

        window.display();
    }

    return 0;
}

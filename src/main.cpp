#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "DFA SQL Injection Visualizer");

    while (window.isOpen()) {
        while (auto eventOpt = window.pollEvent()) {
            auto& event = *eventOpt;
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        // Draw your DFA states here

        window.display();
    }

    return 0;
}

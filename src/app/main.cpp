#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({ 1600, 900 }), "Window");
    
    sf::Texture texture("assets/images/l.png");
    sf::Font font("assets/fonts/first/Barrio-Regular.ttf");
    sf::Text text(font, "I AM L", 130);
    sf::Sprite sprite(texture);
    text.setFillColor(sf::Color::White);
    text.setPosition({ 300.f, 300.f });

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();
        window.draw(sprite);
        window.draw(text);
        window.display();
    }

}

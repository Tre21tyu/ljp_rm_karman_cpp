#include "particle.cpp" // include our particle class
#include <SFML/Graphics.hpp> // Include our 2D graphics lib
#include <iostream>

using std::optional;

auto main(int argc, char *argv[]) -> int {

    // Define window & dimensions & frame r8
    sf::RenderWindow window(sf::VideoMode({800,600}), "No gravity");

    window.setFramerateLimit(120);

    // Initialize particle & shape/ color
    Particle p{300, 400, 100, 0};

    sf::CircleShape p_shape(10.f);

    p_shape.setFillColor(sf::Color::White);

    // Define time
    const float dt =  1.f / 60.f;

    // Define window loop
    while (window.isOpen()) {

        // Listen for user closing window
        while (const optional event = window.pollEvent()) {

            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Update particle position
        updateParticle(p, dt);

        // Set position of the particle shape
        p_shape.setPosition({p.x, p.y});

        // Reset the buffer
        window.clear();;

        // Stage shape to buffer
        window.draw(p_shape);

        // Render shape
        window.display();

    }

    return 0;

}

#include "Engine.h"
Engine::Engine()
{
    
    m_Window.create(sf::VideoMode::getDesktopMode(), "Game Window");
    //naasdkc
    cout << "Starting Particle unit tests..." << std::endl;
    //construct local Particle to be used for unit testing 
    Particle p(m_Window, 4, { (int)m_Window.getSize().x / 2, (int)m_Window.getSize().y / 2 });
    p.unitTests();
    std::cout << "Unit tests complete. Starting engine..." << std::endl;
    
}
void Engine::run()
{
    //construct local Clock object to track time per frame
    sf::Clock clock;

    //create the game loop 
    while(m_Window.isOpen())
    {
        sf::Time elapsed = clock.restart();
        float dt = elapsed.asSeconds();
        //call the functions 
        input();
        update();
        draw();
    
    sf::Event event;
        while (m_Window.pollEvent(event)) 
        {
            if (event.type == sf::Event::Closed)
                m_Window.close();
        }
    }
}

void Engine::input()
{

    sf::Event event;
    //poll the windows event queue
      while (m_Window.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::Closed:
                m_Window.close();
                break;
    //handles the keypresse input
    case sf::Event::MouseButtonPressed:
                if (event.mouseButton.button == sf::Mouse::Left) {
                    // Create 5 particles with random numPoints in the range [25:50]
                    for (int i = 0; i < 5; ++i) {
                        int numPoints = rand() % 26 + 25; // Random number in the range [25:50]
                        sf::Vector2i mousePosition = sf::Mouse::getPosition(m_Window);
                        Particle newParticle(m_Window, numPoints, mousePosition);
                    }
                }
                break;

}

void update(float dtAsSeconds)
{


}
void draw()
{
    //clear the window 
    window.clear();
    //loop though each partivlr 

}
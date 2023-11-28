#include "Engine.h"
Engine()
{
    RenderWindow m_Window(vm,"Particles",Style::Default);
    VideoMode::getDesktopMode();
    
}
void run()
{
    //construct local Clock object to track time per frame
    int Clock;
    //construct local Particle to be used for unit testing 
    int Particle;

    cout << "Starting Particle unit tests..." << endl;
    Particle p(m_Window, 4, { (int)m_Window.getSize().x / 2, (int)m_Window.getSize().y / 2 });
    p.unitTests();
    cout << "Unit tests complete.  Starting engine..." << endl;
    //create the game loop 
    while(m_Window.isOpen())
    {
        input();
        update();
        draw();
    }
}

void input()
{


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
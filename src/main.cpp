#include <QApplication>
#include "gui.h"
#include "ai.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    // Initialize AI with the API key
    AI ai("sk-your-api-key-here");
    
    // Create and show the GUI with the AI instance
    Gui gui(&ai);
    gui.show();
    
    return app.exec();
}

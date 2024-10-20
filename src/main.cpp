#include <QApplication>
#include "gui.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Gui window;
    window.resize(300, 200);
    window.setWindowTitle("AI-Assisted Recipe Planner");
    window.show();

    return app.exec();
}

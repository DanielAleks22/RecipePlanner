#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include "ai.h"

class Gui : public QWidget {
    Q_OBJECT

public:
    explicit Gui(AI* ai, QWidget *parent = nullptr); // Constructor

private:
    AI* ai; // Pointer to the AI instance
};

#endif // GUI_H


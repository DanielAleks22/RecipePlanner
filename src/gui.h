#ifndef GUI_H
#define GUI_H

#include <QWidget>

class Gui : public QWidget {
    Q_OBJECT

public:
    //the explicit protects from constructing using "new QWidget()"
    //allows for parent child relationship (creating windows within other windows)
    explicit Gui(QWidget *parent = nullptr); // Constructor

signals:
    // TODO

public slots:
    // TODO

private:
    // TODO
};

#endif // GUI_H


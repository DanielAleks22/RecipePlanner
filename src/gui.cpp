#include "gui.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <iostream>

Gui::Gui(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("Enter Ingredients:", this);
    layout->addWidget(label);

    QLineEdit *input = new QLineEdit(this);
    layout->addWidget(input);

    QPushButton *button = new QPushButton("Get Recipe Suggestions", this);
    layout->addWidget(button);

    setLayout(layout);

    connect(button, &QPushButton::clicked, this, [input]() {
        QString ingredients = input->text();
        std::cout << "Ingredients: " << ingredients.toStdString() << std::endl;
    });
}

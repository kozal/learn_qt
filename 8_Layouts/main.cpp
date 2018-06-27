#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
//#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;

    // Create empty window
    window->setWindowTitle("My App");

    // Create buttons
    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

    // Create layouts and put buttons in
    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);

    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);

    // Assign layout to window
    // window->setLayout(hlayout);
    window->setLayout(vlayout);

    window->show();

    return app.exec();
    // return 0;
}

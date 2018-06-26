#include <QApplication>
#include <QLabel>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("<b>Hello</b> <font color=red><i>world</i></font>");

    QLabel label2("2Hello world2");
    label2.show();


    // This is a widget so when showing it, QT will encapsulate it with a window
    label->show();

    std::cout << "geddw" << std::endl;

    return app.exec();
    // return 0;
}

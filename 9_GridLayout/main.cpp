#include <QApplication>
#include <QtWidgets>
//#include <QTCore>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;

    // Create empty window
    window->setWindowTitle("My App");

    // Create layout
    QGridLayout *layout = new QGridLayout;
    // Create widgets
    QLabel *label1 = new QLabel("Name:");
    QLineEdit *txtName = new QLineEdit;
    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2 = new QLineEdit;
    QPushButton *button = new QPushButton("OK");

    // Add widgets to layout with grid position [row,col]
    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);
    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);
    // Add widget with position and span(size): 1rowx2cols
    layout->addWidget(button, 2, 0, 1, 2);

    // Assign layout to window and show window
    window->setLayout(layout);
    window->show();

    return app.exec();
}

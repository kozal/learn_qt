#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Read(QString filename)
{
    QFile mFile(filename);

    if (!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Can not open file for read";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();
//    QString mText = in.readLine();

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Read(":/MyFiles/13_ResourceFiles.pro");

    return a.exec();
}

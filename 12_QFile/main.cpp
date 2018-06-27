#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString filename)
{
    QFile mFile(filename);

    if (!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "Can not open file for write";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello world";
    mFile.flush();
    mFile.close();
}

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

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "/Users/omer/workspace/myfile.txt";
    Write(mFilename);
    Read(mFilename);

    return a.exec();
}

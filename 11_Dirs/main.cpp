#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir;

    foreach (QFileInfo mItm, mDir.drives())
    {
        qDebug() << mItm.absoluteFilePath();
    }

    QString mPath = "/Users/omer/workspace/zzz";
    if (!mDir.exists(mPath))
    {
        mDir.mkpath(mPath);
        qDebug() << "Created Dir";
    }
    else
        qDebug() << "Dir Exists";

    QDir mDir2("/Users/omer/workspace");

    foreach (QFileInfo mItm, mDir2.entryInfoList())
    {
        if (mItm.isDir())
            qDebug() << "Dir: " << mItm.absoluteFilePath();
        if (mItm.isFile())
            qDebug() << "File: " << mItm.absoluteFilePath();
    }

    return a.exec();
}

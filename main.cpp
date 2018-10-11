#include <QCoreApplication>
#include <QDebug>

void test(int age) {
    try {
     if(!age) throw QString("Divsion by zero!");
     double value = (double)age / 2;
     qInfo() << value;
    }
    catch (QString e) {
        qInfo() << e;
    }
    catch (...) {
        qInfo() << "Unknown error";
    }

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test(5);
    test(0);

    return a.exec();
}

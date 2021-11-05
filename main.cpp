#include <QApplication>
#include<reportform.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
auto D =new reportform;
D->setWindowTitle("Report Bug");
D->show();
    return a.exec();
}

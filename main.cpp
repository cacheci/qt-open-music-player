#include <QApplication>
#include <QWidget>
#include "Pages/MainPageView.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainPageView mpview;

    //MainModel model;

    //MainController controller(&model,&mpview);

    mpview.show();

    return app.exec();
}

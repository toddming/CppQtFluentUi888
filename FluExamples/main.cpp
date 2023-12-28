#include "../FluControls/FluNavigationView.h"
#include "FluButtonDemo.h"
#include "FluChangeBgDemo.h"
#include "FluNavigationDemo.h"
#include "FluTabDemo.h"
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // FluChangeBackgroundWidget demo;
    // demo.show();

    // FluExampleTabWidget demo;
    // demo.show();

    // FluButtonExampleWidget demo;
    // demo.show();

    FluNavigationDemo demo;
    demo.show();

    return app.exec();
}
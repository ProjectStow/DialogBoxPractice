#include "dialog.h"
#include <QWidget>

#include <QApplication>

int main(int argc, char *argv[])
{
    // QApplication app(argc, argv);
    // QWidget window;
    // window.resize(320, 240);
    // window.show();
    // window.setWindowTitle(
    //     QApplication::translate("toplevel", "Top-level widget"));
    // return app.exec();

    QApplication a(argc, argv);
    Dialog window;
    window.resize(650, 500);
    window.show();
    return a.exec();

}

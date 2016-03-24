#include <QApplication>

#include "mainwindow.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  MainWindow mainwin;
  mainwin.setMinimumSize(600, 400);
  mainwin.show();

  return app.exec();
}

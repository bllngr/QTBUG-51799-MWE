#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QWidget>

class QTabWidget;

class MainWindow : public QWidget
{
  Q_OBJECT
public:
  MainWindow(QWidget* parent = 0);

private:
  QTabWidget* tabWidget;
};


#endif /* MAINWINDOW_H_ */

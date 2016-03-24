#include "mainwindow.h"

#include <QTabWidget>
#include <QVBoxLayout>

#include "directorytree.h"


MainWindow::MainWindow(QWidget* parent) : QWidget(parent)
{
  auto dirTree = new DirectoryTree(this);

  tabWidget = new QTabWidget(this);
  tabWidget->addTab(dirTree, tr("QTabWidget with stylesheet"));
  tabWidget->setStyleSheet("QTabWidget::pane { } ");

  QVBoxLayout* layout = new QVBoxLayout(this);
  layout->addWidget(tabWidget);
}

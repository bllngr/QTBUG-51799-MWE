#ifndef DIRECTORYTREE_H
#define DIRECTORYTREE_H

#include <QWidget>
#include <QFileSystemModel>
#include <QList>


class DirectoryTree : public QWidget
{
  Q_OBJECT
public:
  explicit DirectoryTree(QWidget* parent = 0);

private:
  QFileSystemModel model;
};

#endif // DIRECTORYTREE_H

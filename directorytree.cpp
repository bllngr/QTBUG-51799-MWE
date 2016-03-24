#include "directorytree.h"

#include <QTreeView>
#include <QHBoxLayout>


DirectoryTree::DirectoryTree(QWidget* parent) : QWidget(parent)
{
  model.setRootPath("");

  auto tree = new QTreeView(this);
  tree->setModel(&model);
  tree->setHeaderHidden(true); // not triggered w/o this line
  tree->setAnimated(true);     // not triggered w/o this line

  QHBoxLayout* layout = new QHBoxLayout(this);
  layout->addWidget(tree);

  // only triggered when using a sub-directory as index
  QModelIndex lastSelectedIndex = model.index("C:/Qt");
  tree->scrollTo(lastSelectedIndex); // not triggered w/o this line
}

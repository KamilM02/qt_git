#ifndef SEARCHRECIPE_H
#define SEARCHRECIPE_H

#include <QDialog>

namespace Ui {
class SearchRecipe;
}

class SearchRecipe : public QDialog
{
    Q_OBJECT

public:
    explicit SearchRecipe(QWidget *parent = nullptr);
    ~SearchRecipe();

private:
    Ui::SearchRecipe *ui;
};

#endif // SEARCHRECIPE_H

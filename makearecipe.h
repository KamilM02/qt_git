#ifndef MAKEARECIPE_H
#define MAKEARECIPE_H

#include <QDialog>

namespace Ui {
class MakeARecipe;
}

class MakeARecipe : public QDialog
{
    Q_OBJECT

public:
    explicit MakeARecipe(QWidget *parent = nullptr);
    ~MakeARecipe();

private:
    Ui::MakeARecipe *ui;
};

#endif // MAKEARECIPE_H

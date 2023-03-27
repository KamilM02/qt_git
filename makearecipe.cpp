#include "makearecipe.h"
#include "ui_makearecipe.h"

MakeARecipe::MakeARecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MakeARecipe)
{
    ui->setupUi(this);
}

MakeARecipe::~MakeARecipe()
{
    delete ui;
}

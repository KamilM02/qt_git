#include "searchrecipe.h"
#include "ui_searchrecipe.h"

SearchRecipe::SearchRecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchRecipe)
{
    ui->setupUi(this);
}

SearchRecipe::~SearchRecipe()
{
    delete ui;
}

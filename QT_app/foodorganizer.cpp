#include "foodorganizer.h"
#include "ui_foodorganizer.h"

FoodOrganizer::FoodOrganizer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoodOrganizer)
{
    ui->setupUi(this);
    this->setWindowTitle("Sebastian's app - Food Organizer");
}

FoodOrganizer::~FoodOrganizer()
{
    delete ui;
}

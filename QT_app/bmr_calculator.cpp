#include "bmr_calculator.h"
#include "ui_bmr_calculator.h"

BMR_calculator::BMR_calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BMR_calculator)
{
    ui->setupUi(this);
}

BMR_calculator::~BMR_calculator()
{
    delete ui;
}

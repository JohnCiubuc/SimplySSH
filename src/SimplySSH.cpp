#include "SimplySSH.h"
#include "ui_SimplySSH.h"

SimplySSH::SimplySSH(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimplySSH)
{
    ui->setupUi(this);
}

SimplySSH::~SimplySSH()
{
    delete ui;
}


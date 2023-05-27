#include "ScriptForm.h"
#include "ui_ScriptForm.h"

ScriptForm::ScriptForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScriptForm)
{
    ui->setupUi(this);
    this->hide();
}

ScriptForm::~ScriptForm()
{
    delete ui;
}

void ScriptForm::initialize()
{
    ui->plainTextEdit->clear();
    ui->lineEdit->clear();
    this->show();
}

void ScriptForm::on_pushButton_clicked()
{
    emit updateHost(ui->lineEdit->text(), ui->plainTextEdit->toPlainText());
    this->hide();
}


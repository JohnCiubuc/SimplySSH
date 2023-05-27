#include "SimplySSH.h"
#include "ui_SimplySSH.h"


SimplySSH::SimplySSH(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimplySSH)
{
    ui->setupUi(this);
    sForm = new ScriptForm();
    connect(sForm, &ScriptForm::updateHost, this, &SimplySSH::updateHost);




    QSettings settings("John Ciubuc", "SimplySSH");
    hostMaps = settings.value("hostMaps").toHash();
}

SimplySSH::~SimplySSH()
{
    delete ui;
}

void SimplySSH::on_buttonAddHost_clicked()
{
    sForm->initialize();
}

void SimplySSH::updateHost(QString host, QString content)
{

    db host << content;
}


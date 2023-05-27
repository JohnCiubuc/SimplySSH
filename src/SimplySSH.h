#ifndef SIMPLYSSH_H
#define SIMPLYSSH_H

#include <QMainWindow>
#include <QDebug>
#include <QSettings>

#include "ScriptForm.h"
#define db  qDebug() << this <<
QT_BEGIN_NAMESPACE
namespace Ui
{
class SimplySSH;
}
QT_END_NAMESPACE

class SimplySSH : public QMainWindow
{
    Q_OBJECT

public:
    SimplySSH(QWidget *parent = nullptr);
    ~SimplySSH();

private slots:
    void on_buttonAddHost_clicked();

    void updateHost(QString host, QString content);

private:
    Ui::SimplySSH *ui;
    ScriptForm * sForm;
    QHash<QString,QVariant> hostMaps; //Host,Script
};
#endif // SIMPLYSSH_H

#ifndef SIMPLYSSH_H
#define SIMPLYSSH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SimplySSH; }
QT_END_NAMESPACE

class SimplySSH : public QMainWindow
{
    Q_OBJECT

public:
    SimplySSH(QWidget *parent = nullptr);
    ~SimplySSH();

private:
    Ui::SimplySSH *ui;
};
#endif // SIMPLYSSH_H

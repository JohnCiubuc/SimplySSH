#ifndef SCRIPTFORM_H
#define SCRIPTFORM_H

#include <QWidget>

namespace Ui
{
class ScriptForm;
}

class ScriptForm : public QWidget
{
    Q_OBJECT
signals:
    void updateHost(QString, QString);
public:
    explicit ScriptForm(QWidget *parent = nullptr);
    ~ScriptForm();

    void initialize();
private slots:
    void on_pushButton_clicked();

private:
    Ui::ScriptForm *ui;
};

#endif // SCRIPTFORM_H

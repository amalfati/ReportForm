#ifndef REPORTFORM_H
#define REPORTFORM_H

#include <QWidget>
#include<QLineEdit>
#include<QFormLayout>
#include<QTextEdit>
#include<QComboBox>
#include<QDialogButtonBox>
#include<QPushButton>
#include<QLabel>
class reportform : public QWidget
{
    Q_OBJECT
public:
    explicit reportform(QWidget *parent = nullptr);

protected:
    void createwidgets();
    void placewidgets();
    void makeconnexion();
protected:
    QLineEdit *name;
    QLineEdit *company;
    QLineEdit *phone;
    QLineEdit *email;
    QLineEdit *problem;
    QTextEdit *summary;
    QComboBox *reproducibility;
    QDialogButtonBox *buttonBox;
};
#endif // REPORTFORM_H

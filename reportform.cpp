#include "reportform.h"

reportform::reportform(QWidget *parent) : QWidget(parent)
{
createwidgets();
placewidgets();
makeconnexion();
}
void reportform::createwidgets(){
    name = new QLineEdit;
    company = new QLineEdit;
    phone = new QLineEdit;
    email = new QLineEdit;
    problem = new QLineEdit;
    summary = new QTextEdit;
    reproducibility = new QComboBox;

}
void reportform::placewidgets(){
    QFormLayout *layout = new QFormLayout;
    this->setLayout(layout);
    layout->addRow(name);
    layout->addRow(tr("&Name:"),name);
    layout->addRow(company);
    layout->addRow(tr("&Company:"),company);
    layout->addRow(phone);
    layout->addRow(tr("&phone:"),phone);
    layout->addRow(email);
    layout->addRow(tr("&email:"),email);
    layout->addRow(problem);
    layout->addRow(tr("&problem:"),problem);
    layout->addRow(summary);
    layout->addRow(tr("&summary:"),summary);


    reproducibility = new QComboBox;
    reproducibility->addItem(tr("Always"));
    reproducibility->addItem(tr("usually"));
    reproducibility->addItem(tr("Rarely"));

    layout->addRow(reproducibility);
    layout->addRow(tr("&reproducibility:"),reproducibility);

    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(tr("Submit Bug Report"),
                         QDialogButtonBox::AcceptRole);
    buttonBox->addButton(tr("Don't Submit"),
                         QDialogButtonBox::RejectRole);
    buttonBox->addButton(QDialogButtonBox::Reset);

 layout->addWidget(buttonBox);
  setLayout(layout);
}
void reportform::makeconnexion(){
    connect(buttonBox, SIGNAL(accepted()),
            this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()),
            this, SLOT(reject()));
connect(buttonBox->button(QDialogButtonBox::Reset),
           SIGNAL(clicked()), this, SLOT(reset()));
}

/********************************************************************************
** Form generated from reading UI file 'x2mconvdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X2MCONVDIALOG_H
#define UI_X2MCONVDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_X2mConvDialog
{
public:
    QLabel *label;
    QLineEdit *codeEdit;
    QDialogButtonBox *buttonBox;
    QPushButton *codeButton;
    QLabel *label_2;
    QComboBox *guidComboBox;
    QCheckBox *voiceCheck;

    void setupUi(QDialog *X2mConvDialog)
    {
        if (X2mConvDialog->objectName().isEmpty())
            X2mConvDialog->setObjectName(QStringLiteral("X2mConvDialog"));
        X2mConvDialog->resize(352, 220);
        label = new QLabel(X2mConvDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 61, 16));
        codeEdit = new QLineEdit(X2mConvDialog);
        codeEdit->setObjectName(QStringLiteral("codeEdit"));
        codeEdit->setGeometry(QRect(80, 28, 121, 20));
        buttonBox = new QDialogButtonBox(X2mConvDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 160, 351, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        codeButton = new QPushButton(X2mConvDialog);
        codeButton->setObjectName(QStringLiteral("codeButton"));
        codeButton->setGeometry(QRect(210, 28, 101, 23));
        label_2 = new QLabel(X2mConvDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(21, 70, 61, 16));
        guidComboBox = new QComboBox(X2mConvDialog);
        guidComboBox->setObjectName(QStringLiteral("guidComboBox"));
        guidComboBox->setGeometry(QRect(80, 68, 121, 22));
        voiceCheck = new QCheckBox(X2mConvDialog);
        voiceCheck->setObjectName(QStringLiteral("voiceCheck"));
        voiceCheck->setGeometry(QRect(20, 110, 131, 17));
        voiceCheck->setChecked(true);

        retranslateUi(X2mConvDialog);

        QMetaObject::connectSlotsByName(X2mConvDialog);
    } // setupUi

    void retranslateUi(QDialog *X2mConvDialog)
    {
        X2mConvDialog->setWindowTitle(QApplication::translate("X2mConvDialog", "Convert to X2M", 0));
        label->setText(QApplication::translate("X2mConvDialog", "Char code:", 0));
        codeButton->setText(QApplication::translate("X2mConvDialog", "Generate random", 0));
        label_2->setText(QApplication::translate("X2mConvDialog", "Unique ID:", 0));
        guidComboBox->clear();
        guidComboBox->insertItems(0, QStringList()
         << QApplication::translate("X2mConvDialog", "MD5(name+race)", 0)
         << QApplication::translate("X2mConvDialog", "MD5(name)", 0)
         << QApplication::translate("X2mConvDialog", "Random", 0)
        );
        voiceCheck->setText(QApplication::translate("X2mConvDialog", "Add CSS voice", 0));
    } // retranslateUi

};

namespace Ui {
    class X2mConvDialog: public Ui_X2mConvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X2MCONVDIALOG_H

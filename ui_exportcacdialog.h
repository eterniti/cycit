/********************************************************************************
** Form generated from reading UI file 'exportcacdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCACDIALOG_H
#define UI_EXPORTCACDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ExportCacDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *infoCheck;
    QCheckBox *looksCheck;
    QCheckBox *equipmentCheck;
    QCheckBox *statsCheck;
    QCheckBox *skillsCheck;

    void setupUi(QDialog *ExportCacDialog)
    {
        if (ExportCacDialog->objectName().isEmpty())
            ExportCacDialog->setObjectName(QStringLiteral("ExportCacDialog"));
        ExportCacDialog->resize(545, 346);
        buttonBox = new QDialogButtonBox(ExportCacDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 290, 541, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(ExportCacDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 281, 16));
        label_2 = new QLabel(ExportCacDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 241, 16));
        label_3 = new QLabel(ExportCacDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 521, 16));
        infoCheck = new QCheckBox(ExportCacDialog);
        infoCheck->setObjectName(QStringLiteral("infoCheck"));
        infoCheck->setGeometry(QRect(20, 130, 211, 17));
        looksCheck = new QCheckBox(ExportCacDialog);
        looksCheck->setObjectName(QStringLiteral("looksCheck"));
        looksCheck->setGeometry(QRect(20, 160, 171, 17));
        equipmentCheck = new QCheckBox(ExportCacDialog);
        equipmentCheck->setObjectName(QStringLiteral("equipmentCheck"));
        equipmentCheck->setGeometry(QRect(20, 190, 141, 17));
        statsCheck = new QCheckBox(ExportCacDialog);
        statsCheck->setObjectName(QStringLiteral("statsCheck"));
        statsCheck->setGeometry(QRect(20, 220, 121, 17));
        skillsCheck = new QCheckBox(ExportCacDialog);
        skillsCheck->setObjectName(QStringLiteral("skillsCheck"));
        skillsCheck->setGeometry(QRect(20, 250, 121, 17));

        retranslateUi(ExportCacDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCacDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportCacDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportCacDialog)
    {
        ExportCacDialog->setWindowTitle(QApplication::translate("ExportCacDialog", "Export to CAC", 0));
        label->setText(QApplication::translate("ExportCacDialog", "Regular font: only the selected preset will get affected.", 0));
        label_2->setText(QApplication::translate("ExportCacDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Bold font: the whole cac will get affected.</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("ExportCacDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Red bold font: the whole cac is affected and the data may be specially dangerous if invalid.</span></p></body></html>", 0));
        infoCheck->setText(QApplication::translate("ExportCacDialog", "Export info (name, voice, race)", 0));
        looksCheck->setText(QApplication::translate("ExportCacDialog", "Export body/looks", 0));
        equipmentCheck->setText(QApplication::translate("ExportCacDialog", "Export equipment", 0));
        statsCheck->setText(QApplication::translate("ExportCacDialog", "Export stats", 0));
        skillsCheck->setText(QApplication::translate("ExportCacDialog", "Export skills", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportCacDialog: public Ui_ExportCacDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCACDIALOG_H

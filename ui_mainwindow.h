/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionFromOtherEntry;
    QAction *actionFromExternalPAL;
    QAction *actionFromOtherEntryInfo;
    QAction *actionFromExternalPAInfo;
    QAction *actionFromOtherEntryEquip;
    QAction *actionFromExternalPALEquip;
    QAction *actionFromOtherEntryStats;
    QAction *actionFromExternalPALStats;
    QAction *actionFromCAC;
    QAction *actionFromCACInfo;
    QAction *actionFromCACEquip;
    QAction *actionFromCACStats;
    QAction *actionConvert2X2M;
    QAction *actionExportCac;
    QAction *actionFromX2mInfo;
    QAction *actionFromX2mEquip;
    QAction *actionFromX2mStats;
    QAction *actionFromX2m;
    QAction *actionToggle_dark_mode;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *infoTab;
    QLabel *label;
    QToolButton *infoCopyButton;
    QComboBox *cmsComboBox;
    QLabel *label_2;
    QLineEdit *voiceEdit;
    QLabel *label_5;
    QLineEdit *nameEdit;
    QComboBox *langComboBox;
    QCheckBox *allLangCheck;
    QLabel *label_60;
    QComboBox *typeComboBox;
    QWidget *equipTab;
    QToolButton *equipCopyButton;
    QLabel *label_4;
    QLineEdit *faceTopEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *faceBottomEdit;
    QLabel *label_8;
    QLineEdit *eyesEdit;
    QLabel *label_9;
    QLineEdit *noseEdit;
    QLabel *label_10;
    QLineEdit *earsEdit;
    QLabel *label_11;
    QLineEdit *hairEdit;
    QLabel *label_12;
    QComboBox *topComboBox;
    QLabel *label_13;
    QComboBox *bottomComboBox;
    QLabel *label_14;
    QComboBox *glovesComboBox;
    QLabel *label_15;
    QComboBox *shoesComboBox;
    QLineEdit *bodyShapeEdit;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QComboBox *accesoryComboBox;
    QLabel *label_42;
    QComboBox *talismanComboBox;
    QPushButton *skinColor1Button;
    QPushButton *skinColor2Button;
    QPushButton *skinColor3Button;
    QPushButton *skinColor4Button;
    QPushButton *hairColorButton;
    QPushButton *eyesColorButton;
    QPushButton *topColor1Button;
    QPushButton *topColor2Button;
    QPushButton *topColor3Button;
    QPushButton *topColor4Button;
    QPushButton *bottomColor1Button;
    QPushButton *bottomColor2Button;
    QPushButton *bottomColor3Button;
    QPushButton *bottomColor4Button;
    QPushButton *glovesColor1Button;
    QPushButton *glovesColor2Button;
    QPushButton *glovesColor3Button;
    QPushButton *glovesColor4Button;
    QPushButton *shoesColor1Button;
    QPushButton *shoesColor2Button;
    QPushButton *shoesColor3Button;
    QPushButton *shoesColor4Button;
    QPushButton *makeupColor1Button;
    QPushButton *makeupColor2Button;
    QPushButton *makeupColor3Button;
    QWidget *statsTab;
    QToolButton *statsCopyButton;
    QLabel *label_43;
    QLineEdit *levelEdit;
    QLabel *label_44;
    QLineEdit *u0EEdit;
    QLabel *label_45;
    QLineEdit *heaEdit;
    QLabel *label_46;
    QLineEdit *kiEdit;
    QLabel *label_47;
    QLineEdit *stmEdit;
    QLabel *label_48;
    QLineEdit *atkEdit;
    QLabel *label_49;
    QLineEdit *strEdit;
    QLabel *label_50;
    QLineEdit *blaEdit;
    QLabel *label_51;
    QComboBox *super1ComboBox;
    QLabel *label_52;
    QComboBox *super2ComboBox;
    QLabel *label_53;
    QComboBox *super3ComboBox;
    QLabel *label_54;
    QComboBox *super4ComboBox;
    QLabel *label_55;
    QComboBox *ultimate1ComboBox;
    QLabel *label_56;
    QComboBox *ultimate2ComboBox;
    QLabel *label_57;
    QComboBox *evasiveComboBox;
    QLabel *label_58;
    QComboBox *blastComboBox;
    QLabel *label_59;
    QComboBox *awakenComboBox;
    QComboBox *entriesComboBox;
    QPushButton *addButton;
    QPushButton *removeButton;
    QToolButton *copyButton;
    QPushButton *applyButton;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1020, 655);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionFromOtherEntry = new QAction(MainWindow);
        actionFromOtherEntry->setObjectName(QStringLiteral("actionFromOtherEntry"));
        actionFromExternalPAL = new QAction(MainWindow);
        actionFromExternalPAL->setObjectName(QStringLiteral("actionFromExternalPAL"));
        actionFromOtherEntryInfo = new QAction(MainWindow);
        actionFromOtherEntryInfo->setObjectName(QStringLiteral("actionFromOtherEntryInfo"));
        actionFromExternalPAInfo = new QAction(MainWindow);
        actionFromExternalPAInfo->setObjectName(QStringLiteral("actionFromExternalPAInfo"));
        actionFromOtherEntryEquip = new QAction(MainWindow);
        actionFromOtherEntryEquip->setObjectName(QStringLiteral("actionFromOtherEntryEquip"));
        actionFromExternalPALEquip = new QAction(MainWindow);
        actionFromExternalPALEquip->setObjectName(QStringLiteral("actionFromExternalPALEquip"));
        actionFromOtherEntryStats = new QAction(MainWindow);
        actionFromOtherEntryStats->setObjectName(QStringLiteral("actionFromOtherEntryStats"));
        actionFromExternalPALStats = new QAction(MainWindow);
        actionFromExternalPALStats->setObjectName(QStringLiteral("actionFromExternalPALStats"));
        actionFromCAC = new QAction(MainWindow);
        actionFromCAC->setObjectName(QStringLiteral("actionFromCAC"));
        actionFromCACInfo = new QAction(MainWindow);
        actionFromCACInfo->setObjectName(QStringLiteral("actionFromCACInfo"));
        actionFromCACEquip = new QAction(MainWindow);
        actionFromCACEquip->setObjectName(QStringLiteral("actionFromCACEquip"));
        actionFromCACStats = new QAction(MainWindow);
        actionFromCACStats->setObjectName(QStringLiteral("actionFromCACStats"));
        actionConvert2X2M = new QAction(MainWindow);
        actionConvert2X2M->setObjectName(QStringLiteral("actionConvert2X2M"));
        actionExportCac = new QAction(MainWindow);
        actionExportCac->setObjectName(QStringLiteral("actionExportCac"));
        actionFromX2mInfo = new QAction(MainWindow);
        actionFromX2mInfo->setObjectName(QStringLiteral("actionFromX2mInfo"));
        actionFromX2mEquip = new QAction(MainWindow);
        actionFromX2mEquip->setObjectName(QStringLiteral("actionFromX2mEquip"));
        actionFromX2mStats = new QAction(MainWindow);
        actionFromX2mStats->setObjectName(QStringLiteral("actionFromX2mStats"));
        actionFromX2m = new QAction(MainWindow);
        actionFromX2m->setObjectName(QStringLiteral("actionFromX2m"));
        actionToggle_dark_mode = new QAction(MainWindow);
        actionToggle_dark_mode->setObjectName(QStringLiteral("actionToggle_dark_mode"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 60, 961, 510));
        tabWidget->setAutoFillBackground(true);
        infoTab = new QWidget();
        infoTab->setObjectName(QStringLiteral("infoTab"));
        infoTab->setAutoFillBackground(true);
        label = new QLabel(infoTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 110, 41, 16));
        infoCopyButton = new QToolButton(infoTab);
        infoCopyButton->setObjectName(QStringLiteral("infoCopyButton"));
        infoCopyButton->setGeometry(QRect(10, 20, 75, 23));
        infoCopyButton->setPopupMode(QToolButton::InstantPopup);
        infoCopyButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        cmsComboBox = new QComboBox(infoTab);
        cmsComboBox->setObjectName(QStringLiteral("cmsComboBox"));
        cmsComboBox->setGeometry(QRect(50, 108, 121, 22));
        label_2 = new QLabel(infoTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 150, 41, 16));
        voiceEdit = new QLineEdit(infoTab);
        voiceEdit->setObjectName(QStringLiteral("voiceEdit"));
        voiceEdit->setGeometry(QRect(50, 150, 121, 20));
        label_5 = new QLabel(infoTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 70, 47, 13));
        nameEdit = new QLineEdit(infoTab);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(50, 68, 251, 20));
        langComboBox = new QComboBox(infoTab);
        langComboBox->setObjectName(QStringLiteral("langComboBox"));
        langComboBox->setGeometry(QRect(310, 68, 141, 22));
        allLangCheck = new QCheckBox(infoTab);
        allLangCheck->setObjectName(QStringLiteral("allLangCheck"));
        allLangCheck->setGeometry(QRect(470, 70, 211, 17));
        allLangCheck->setChecked(true);
        label_60 = new QLabel(infoTab);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(12, 190, 47, 13));
        typeComboBox = new QComboBox(infoTab);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setGeometry(QRect(50, 188, 121, 22));
        tabWidget->addTab(infoTab, QString());
        equipTab = new QWidget();
        equipTab->setObjectName(QStringLiteral("equipTab"));
        equipTab->setAutoFillBackground(true);
        equipCopyButton = new QToolButton(equipTab);
        equipCopyButton->setObjectName(QStringLiteral("equipCopyButton"));
        equipCopyButton->setGeometry(QRect(10, 20, 101, 23));
        equipCopyButton->setPopupMode(QToolButton::InstantPopup);
        equipCopyButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        label_4 = new QLabel(equipTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(314, 70, 91, 16));
        faceTopEdit = new QLineEdit(equipTab);
        faceTopEdit->setObjectName(QStringLiteral("faceTopEdit"));
        faceTopEdit->setGeometry(QRect(410, 70, 211, 20));
        label_6 = new QLabel(equipTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 430, 61, 16));
        label_7 = new QLabel(equipTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(26, 70, 71, 16));
        faceBottomEdit = new QLineEdit(equipTab);
        faceBottomEdit->setObjectName(QStringLiteral("faceBottomEdit"));
        faceBottomEdit->setGeometry(QRect(95, 70, 211, 20));
        label_8 = new QLabel(equipTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(686, 70, 47, 13));
        eyesEdit = new QLineEdit(equipTab);
        eyesEdit->setObjectName(QStringLiteral("eyesEdit"));
        eyesEdit->setGeometry(QRect(725, 70, 211, 20));
        label_9 = new QLabel(equipTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(58, 100, 47, 13));
        noseEdit = new QLineEdit(equipTab);
        noseEdit->setObjectName(QStringLiteral("noseEdit"));
        noseEdit->setGeometry(QRect(95, 100, 211, 20));
        label_10 = new QLabel(equipTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 100, 47, 13));
        earsEdit = new QLineEdit(equipTab);
        earsEdit->setObjectName(QStringLiteral("earsEdit"));
        earsEdit->setGeometry(QRect(410, 100, 211, 20));
        label_11 = new QLabel(equipTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(690, 100, 47, 13));
        hairEdit = new QLineEdit(equipTab);
        hairEdit->setObjectName(QStringLiteral("hairEdit"));
        hairEdit->setGeometry(QRect(725, 100, 211, 20));
        label_12 = new QLabel(equipTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(63, 130, 51, 16));
        topComboBox = new QComboBox(equipTab);
        topComboBox->setObjectName(QStringLiteral("topComboBox"));
        topComboBox->setGeometry(QRect(95, 130, 211, 22));
        label_13 = new QLabel(equipTab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(359, 130, 47, 13));
        bottomComboBox = new QComboBox(equipTab);
        bottomComboBox->setObjectName(QStringLiteral("bottomComboBox"));
        bottomComboBox->setGeometry(QRect(410, 130, 211, 22));
        label_14 = new QLabel(equipTab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(676, 130, 47, 13));
        glovesComboBox = new QComboBox(equipTab);
        glovesComboBox->setObjectName(QStringLiteral("glovesComboBox"));
        glovesComboBox->setGeometry(QRect(725, 130, 211, 22));
        label_15 = new QLabel(equipTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(53, 160, 47, 13));
        shoesComboBox = new QComboBox(equipTab);
        shoesComboBox->setObjectName(QStringLiteral("shoesComboBox"));
        shoesComboBox->setGeometry(QRect(95, 160, 211, 22));
        bodyShapeEdit = new QLineEdit(equipTab);
        bodyShapeEdit->setObjectName(QStringLiteral("bodyShapeEdit"));
        bodyShapeEdit->setGeometry(QRect(410, 160, 211, 20));
        label_16 = new QLabel(equipTab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(339, 160, 81, 16));
        label_17 = new QLabel(equipTab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(648, 160, 71, 16));
        label_18 = new QLabel(equipTab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 190, 81, 16));
        label_19 = new QLabel(equipTab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(333, 190, 71, 16));
        label_20 = new QLabel(equipTab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(649, 190, 91, 16));
        label_21 = new QLabel(equipTab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(37, 220, 61, 16));
        label_22 = new QLabel(equipTab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(346, 220, 60, 13));
        label_23 = new QLabel(equipTab);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(651, 220, 71, 16));
        label_24 = new QLabel(equipTab);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(22, 250, 71, 16));
        label_25 = new QLabel(equipTab);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(336, 250, 71, 16));
        label_26 = new QLabel(equipTab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(651, 250, 71, 16));
        label_27 = new QLabel(equipTab);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(7, 280, 91, 16));
        label_28 = new QLabel(equipTab);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(321, 280, 91, 16));
        label_29 = new QLabel(equipTab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(637, 280, 101, 20));
        label_30 = new QLabel(equipTab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(7, 310, 101, 16));
        label_31 = new QLabel(equipTab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(323, 310, 91, 16));
        label_32 = new QLabel(equipTab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(639, 310, 91, 16));
        label_33 = new QLabel(equipTab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(9, 340, 91, 16));
        label_34 = new QLabel(equipTab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(323, 340, 91, 16));
        label_35 = new QLabel(equipTab);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(643, 340, 91, 16));
        label_36 = new QLabel(equipTab);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(12, 370, 101, 16));
        label_37 = new QLabel(equipTab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(326, 370, 75, 13));
        label_38 = new QLabel(equipTab);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(643, 370, 91, 16));
        label_39 = new QLabel(equipTab);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(1, 400, 101, 16));
        label_40 = new QLabel(equipTab);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(315, 400, 91, 16));
        label_41 = new QLabel(equipTab);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(633, 400, 101, 16));
        accesoryComboBox = new QComboBox(equipTab);
        accesoryComboBox->setObjectName(QStringLiteral("accesoryComboBox"));
        accesoryComboBox->setGeometry(QRect(95, 430, 211, 22));
        label_42 = new QLabel(equipTab);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(357, 430, 47, 13));
        talismanComboBox = new QComboBox(equipTab);
        talismanComboBox->setObjectName(QStringLiteral("talismanComboBox"));
        talismanComboBox->setGeometry(QRect(410, 430, 211, 22));
        skinColor1Button = new QPushButton(equipTab);
        skinColor1Button->setObjectName(QStringLiteral("skinColor1Button"));
        skinColor1Button->setGeometry(QRect(725, 160, 211, 20));
        skinColor1Button->setAutoFillBackground(false);
        skinColor1Button->setFlat(true);
        skinColor2Button = new QPushButton(equipTab);
        skinColor2Button->setObjectName(QStringLiteral("skinColor2Button"));
        skinColor2Button->setGeometry(QRect(95, 190, 211, 20));
        skinColor2Button->setFlat(true);
        skinColor3Button = new QPushButton(equipTab);
        skinColor3Button->setObjectName(QStringLiteral("skinColor3Button"));
        skinColor3Button->setGeometry(QRect(410, 190, 211, 20));
        skinColor3Button->setFlat(true);
        skinColor4Button = new QPushButton(equipTab);
        skinColor4Button->setObjectName(QStringLiteral("skinColor4Button"));
        skinColor4Button->setGeometry(QRect(725, 190, 211, 20));
        skinColor4Button->setFlat(true);
        hairColorButton = new QPushButton(equipTab);
        hairColorButton->setObjectName(QStringLiteral("hairColorButton"));
        hairColorButton->setGeometry(QRect(95, 220, 211, 20));
        hairColorButton->setFlat(true);
        eyesColorButton = new QPushButton(equipTab);
        eyesColorButton->setObjectName(QStringLiteral("eyesColorButton"));
        eyesColorButton->setGeometry(QRect(410, 220, 211, 20));
        eyesColorButton->setAutoFillBackground(false);
        eyesColorButton->setFlat(true);
        topColor1Button = new QPushButton(equipTab);
        topColor1Button->setObjectName(QStringLiteral("topColor1Button"));
        topColor1Button->setGeometry(QRect(725, 220, 211, 20));
        topColor1Button->setFlat(true);
        topColor2Button = new QPushButton(equipTab);
        topColor2Button->setObjectName(QStringLiteral("topColor2Button"));
        topColor2Button->setGeometry(QRect(95, 250, 211, 20));
        topColor2Button->setFlat(true);
        topColor3Button = new QPushButton(equipTab);
        topColor3Button->setObjectName(QStringLiteral("topColor3Button"));
        topColor3Button->setGeometry(QRect(410, 250, 211, 20));
        topColor3Button->setFlat(true);
        topColor4Button = new QPushButton(equipTab);
        topColor4Button->setObjectName(QStringLiteral("topColor4Button"));
        topColor4Button->setGeometry(QRect(725, 250, 211, 20));
        topColor4Button->setFlat(true);
        bottomColor1Button = new QPushButton(equipTab);
        bottomColor1Button->setObjectName(QStringLiteral("bottomColor1Button"));
        bottomColor1Button->setGeometry(QRect(95, 280, 211, 20));
        bottomColor1Button->setFlat(true);
        bottomColor2Button = new QPushButton(equipTab);
        bottomColor2Button->setObjectName(QStringLiteral("bottomColor2Button"));
        bottomColor2Button->setGeometry(QRect(410, 280, 211, 20));
        bottomColor2Button->setFlat(true);
        bottomColor3Button = new QPushButton(equipTab);
        bottomColor3Button->setObjectName(QStringLiteral("bottomColor3Button"));
        bottomColor3Button->setGeometry(QRect(725, 280, 211, 20));
        bottomColor3Button->setFlat(true);
        bottomColor4Button = new QPushButton(equipTab);
        bottomColor4Button->setObjectName(QStringLiteral("bottomColor4Button"));
        bottomColor4Button->setGeometry(QRect(95, 310, 211, 20));
        bottomColor4Button->setFlat(true);
        glovesColor1Button = new QPushButton(equipTab);
        glovesColor1Button->setObjectName(QStringLiteral("glovesColor1Button"));
        glovesColor1Button->setGeometry(QRect(410, 310, 211, 20));
        glovesColor1Button->setFlat(true);
        glovesColor2Button = new QPushButton(equipTab);
        glovesColor2Button->setObjectName(QStringLiteral("glovesColor2Button"));
        glovesColor2Button->setGeometry(QRect(725, 310, 211, 20));
        glovesColor2Button->setFlat(true);
        glovesColor3Button = new QPushButton(equipTab);
        glovesColor3Button->setObjectName(QStringLiteral("glovesColor3Button"));
        glovesColor3Button->setGeometry(QRect(95, 340, 211, 20));
        glovesColor3Button->setFlat(true);
        glovesColor4Button = new QPushButton(equipTab);
        glovesColor4Button->setObjectName(QStringLiteral("glovesColor4Button"));
        glovesColor4Button->setGeometry(QRect(410, 340, 211, 20));
        glovesColor4Button->setFlat(true);
        shoesColor1Button = new QPushButton(equipTab);
        shoesColor1Button->setObjectName(QStringLiteral("shoesColor1Button"));
        shoesColor1Button->setGeometry(QRect(725, 340, 211, 20));
        shoesColor1Button->setFlat(true);
        shoesColor2Button = new QPushButton(equipTab);
        shoesColor2Button->setObjectName(QStringLiteral("shoesColor2Button"));
        shoesColor2Button->setGeometry(QRect(95, 370, 211, 20));
        shoesColor2Button->setFlat(true);
        shoesColor3Button = new QPushButton(equipTab);
        shoesColor3Button->setObjectName(QStringLiteral("shoesColor3Button"));
        shoesColor3Button->setGeometry(QRect(410, 370, 211, 20));
        shoesColor3Button->setFlat(true);
        shoesColor4Button = new QPushButton(equipTab);
        shoesColor4Button->setObjectName(QStringLiteral("shoesColor4Button"));
        shoesColor4Button->setGeometry(QRect(725, 370, 210, 20));
        shoesColor4Button->setFlat(true);
        makeupColor1Button = new QPushButton(equipTab);
        makeupColor1Button->setObjectName(QStringLiteral("makeupColor1Button"));
        makeupColor1Button->setGeometry(QRect(95, 400, 211, 20));
        makeupColor1Button->setFlat(true);
        makeupColor2Button = new QPushButton(equipTab);
        makeupColor2Button->setObjectName(QStringLiteral("makeupColor2Button"));
        makeupColor2Button->setGeometry(QRect(410, 400, 211, 20));
        makeupColor2Button->setFlat(true);
        makeupColor3Button = new QPushButton(equipTab);
        makeupColor3Button->setObjectName(QStringLiteral("makeupColor3Button"));
        makeupColor3Button->setGeometry(QRect(725, 400, 211, 20));
        makeupColor3Button->setFlat(true);
        tabWidget->addTab(equipTab, QString());
        statsTab = new QWidget();
        statsTab->setObjectName(QStringLiteral("statsTab"));
        statsTab->setAutoFillBackground(true);
        statsCopyButton = new QToolButton(statsTab);
        statsCopyButton->setObjectName(QStringLiteral("statsCopyButton"));
        statsCopyButton->setGeometry(QRect(10, 20, 101, 23));
        statsCopyButton->setPopupMode(QToolButton::InstantPopup);
        statsCopyButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        label_43 = new QLabel(statsTab);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(20, 70, 47, 13));
        levelEdit = new QLineEdit(statsTab);
        levelEdit->setObjectName(QStringLiteral("levelEdit"));
        levelEdit->setGeometry(QRect(60, 70, 121, 20));
        label_44 = new QLabel(statsTab);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(360, 70, 47, 13));
        u0EEdit = new QLineEdit(statsTab);
        u0EEdit->setObjectName(QStringLiteral("u0EEdit"));
        u0EEdit->setGeometry(QRect(400, 70, 121, 20));
        label_45 = new QLabel(statsTab);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(24, 110, 47, 13));
        heaEdit = new QLineEdit(statsTab);
        heaEdit->setObjectName(QStringLiteral("heaEdit"));
        heaEdit->setGeometry(QRect(60, 108, 121, 20));
        label_46 = new QLabel(statsTab);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(372, 110, 47, 13));
        kiEdit = new QLineEdit(statsTab);
        kiEdit->setObjectName(QStringLiteral("kiEdit"));
        kiEdit->setGeometry(QRect(400, 108, 121, 20));
        label_47 = new QLabel(statsTab);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(695, 110, 47, 13));
        stmEdit = new QLineEdit(statsTab);
        stmEdit->setObjectName(QStringLiteral("stmEdit"));
        stmEdit->setGeometry(QRect(730, 108, 121, 20));
        label_48 = new QLabel(statsTab);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(24, 150, 47, 13));
        atkEdit = new QLineEdit(statsTab);
        atkEdit->setObjectName(QStringLiteral("atkEdit"));
        atkEdit->setGeometry(QRect(60, 148, 121, 20));
        label_49 = new QLabel(statsTab);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(365, 150, 47, 13));
        strEdit = new QLineEdit(statsTab);
        strEdit->setObjectName(QStringLiteral("strEdit"));
        strEdit->setGeometry(QRect(400, 148, 121, 20));
        label_50 = new QLabel(statsTab);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(695, 150, 47, 13));
        blaEdit = new QLineEdit(statsTab);
        blaEdit->setObjectName(QStringLiteral("blaEdit"));
        blaEdit->setGeometry(QRect(730, 148, 121, 20));
        label_51 = new QLabel(statsTab);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(10, 240, 61, 16));
        super1ComboBox = new QComboBox(statsTab);
        super1ComboBox->setObjectName(QStringLiteral("super1ComboBox"));
        super1ComboBox->setGeometry(QRect(68, 240, 221, 22));
        label_52 = new QLabel(statsTab);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(10, 280, 47, 13));
        super2ComboBox = new QComboBox(statsTab);
        super2ComboBox->setObjectName(QStringLiteral("super2ComboBox"));
        super2ComboBox->setGeometry(QRect(68, 280, 221, 22));
        label_53 = new QLabel(statsTab);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(10, 320, 47, 13));
        super3ComboBox = new QComboBox(statsTab);
        super3ComboBox->setObjectName(QStringLiteral("super3ComboBox"));
        super3ComboBox->setGeometry(QRect(68, 320, 221, 22));
        label_54 = new QLabel(statsTab);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(10, 360, 47, 13));
        super4ComboBox = new QComboBox(statsTab);
        super4ComboBox->setObjectName(QStringLiteral("super4ComboBox"));
        super4ComboBox->setGeometry(QRect(68, 360, 221, 22));
        label_55 = new QLabel(statsTab);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(340, 240, 71, 16));
        ultimate1ComboBox = new QComboBox(statsTab);
        ultimate1ComboBox->setObjectName(QStringLiteral("ultimate1ComboBox"));
        ultimate1ComboBox->setGeometry(QRect(410, 240, 221, 22));
        label_56 = new QLabel(statsTab);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(340, 280, 61, 16));
        ultimate2ComboBox = new QComboBox(statsTab);
        ultimate2ComboBox->setObjectName(QStringLiteral("ultimate2ComboBox"));
        ultimate2ComboBox->setGeometry(QRect(410, 280, 221, 22));
        label_57 = new QLabel(statsTab);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(350, 320, 71, 16));
        evasiveComboBox = new QComboBox(statsTab);
        evasiveComboBox->setObjectName(QStringLiteral("evasiveComboBox"));
        evasiveComboBox->setGeometry(QRect(410, 320, 221, 22));
        label_58 = new QLabel(statsTab);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(680, 240, 47, 13));
        blastComboBox = new QComboBox(statsTab);
        blastComboBox->setObjectName(QStringLiteral("blastComboBox"));
        blastComboBox->setGeometry(QRect(730, 240, 211, 22));
        label_59 = new QLabel(statsTab);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(670, 280, 47, 13));
        awakenComboBox = new QComboBox(statsTab);
        awakenComboBox->setObjectName(QStringLiteral("awakenComboBox"));
        awakenComboBox->setGeometry(QRect(730, 280, 211, 22));
        tabWidget->addTab(statsTab, QString());
        entriesComboBox = new QComboBox(centralWidget);
        entriesComboBox->setObjectName(QStringLiteral("entriesComboBox"));
        entriesComboBox->setGeometry(QRect(30, 20, 181, 22));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(230, 20, 75, 23));
        removeButton = new QPushButton(centralWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(320, 20, 75, 23));
        copyButton = new QToolButton(centralWidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));
        copyButton->setGeometry(QRect(911, 20, 75, 23));
        copyButton->setPopupMode(QToolButton::InstantPopup);
        copyButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        applyButton = new QPushButton(centralWidget);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(30, 580, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(115, 583, 331, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1020, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionConvert2X2M);
        menuFile->addAction(actionExportCac);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuView->addAction(actionToggle_dark_mode);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Cycit", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionFromOtherEntry->setText(QApplication::translate("MainWindow", "From other entry", 0));
#ifndef QT_NO_TOOLTIP
        actionFromOtherEntry->setToolTip(QApplication::translate("MainWindow", "From other entry", 0));
#endif // QT_NO_TOOLTIP
        actionFromExternalPAL->setText(QApplication::translate("MainWindow", "From external PAL", 0));
#ifndef QT_NO_TOOLTIP
        actionFromExternalPAL->setToolTip(QApplication::translate("MainWindow", "From external PAL", 0));
#endif // QT_NO_TOOLTIP
        actionFromOtherEntryInfo->setText(QApplication::translate("MainWindow", "From other entry", 0));
#ifndef QT_NO_TOOLTIP
        actionFromOtherEntryInfo->setToolTip(QApplication::translate("MainWindow", "From other entry", 0));
#endif // QT_NO_TOOLTIP
        actionFromExternalPAInfo->setText(QApplication::translate("MainWindow", "From external PAL", 0));
#ifndef QT_NO_TOOLTIP
        actionFromExternalPAInfo->setToolTip(QApplication::translate("MainWindow", "From external PAL", 0));
#endif // QT_NO_TOOLTIP
        actionFromOtherEntryEquip->setText(QApplication::translate("MainWindow", "From other entry", 0));
#ifndef QT_NO_TOOLTIP
        actionFromOtherEntryEquip->setToolTip(QApplication::translate("MainWindow", "From other entry", 0));
#endif // QT_NO_TOOLTIP
        actionFromExternalPALEquip->setText(QApplication::translate("MainWindow", "From external PAL", 0));
#ifndef QT_NO_TOOLTIP
        actionFromExternalPALEquip->setToolTip(QApplication::translate("MainWindow", "From external PAL", 0));
#endif // QT_NO_TOOLTIP
        actionFromOtherEntryStats->setText(QApplication::translate("MainWindow", "From other entry", 0));
#ifndef QT_NO_TOOLTIP
        actionFromOtherEntryStats->setToolTip(QApplication::translate("MainWindow", "From other entry", 0));
#endif // QT_NO_TOOLTIP
        actionFromExternalPALStats->setText(QApplication::translate("MainWindow", "From external PAL", 0));
#ifndef QT_NO_TOOLTIP
        actionFromExternalPALStats->setToolTip(QApplication::translate("MainWindow", "From external PAL", 0));
#endif // QT_NO_TOOLTIP
        actionFromCAC->setText(QApplication::translate("MainWindow", "From CaC", 0));
        actionFromCACInfo->setText(QApplication::translate("MainWindow", "From CaC", 0));
        actionFromCACEquip->setText(QApplication::translate("MainWindow", "From CaC", 0));
        actionFromCACStats->setText(QApplication::translate("MainWindow", "From CaC", 0));
        actionConvert2X2M->setText(QApplication::translate("MainWindow", "Convert current entry to X2M", 0));
        actionExportCac->setText(QApplication::translate("MainWindow", "Export current entry to CAC (save file)", 0));
        actionFromX2mInfo->setText(QApplication::translate("MainWindow", "From X2M", 0));
#ifndef QT_NO_TOOLTIP
        actionFromX2mInfo->setToolTip(QApplication::translate("MainWindow", "From X2M", 0));
#endif // QT_NO_TOOLTIP
        actionFromX2mEquip->setText(QApplication::translate("MainWindow", "From X2M", 0));
#ifndef QT_NO_TOOLTIP
        actionFromX2mEquip->setToolTip(QApplication::translate("MainWindow", "From X2M", 0));
#endif // QT_NO_TOOLTIP
        actionFromX2mStats->setText(QApplication::translate("MainWindow", "From X2M", 0));
#ifndef QT_NO_TOOLTIP
        actionFromX2mStats->setToolTip(QApplication::translate("MainWindow", "From X2M", 0));
#endif // QT_NO_TOOLTIP
        actionFromX2m->setText(QApplication::translate("MainWindow", "From X2M", 0));
#ifndef QT_NO_TOOLTIP
        actionFromX2m->setToolTip(QApplication::translate("MainWindow", "From X2M", 0));
#endif // QT_NO_TOOLTIP
        actionToggle_dark_mode->setText(QApplication::translate("MainWindow", "Toggle dark mode", 0));
        label->setText(QApplication::translate("MainWindow", "Race:", 0));
        infoCopyButton->setText(QApplication::translate("MainWindow", "Copy Info", 0));
        label_2->setText(QApplication::translate("MainWindow", "Voice:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Name:", 0));
        langComboBox->clear();
        langComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "English", 0)
         << QApplication::translate("MainWindow", "Spanish (es)", 0)
         << QApplication::translate("MainWindow", "Spanish (ca)", 0)
         << QApplication::translate("MainWindow", "French", 0)
         << QApplication::translate("MainWindow", "German", 0)
         << QApplication::translate("MainWindow", "Italian", 0)
         << QApplication::translate("MainWindow", "Portuguese", 0)
         << QApplication::translate("MainWindow", "Polish", 0)
         << QApplication::translate("MainWindow", "Russian", 0)
         << QApplication::translate("MainWindow", "Chinese (tw)", 0)
         << QApplication::translate("MainWindow", "Chinese (zh)", 0)
         << QApplication::translate("MainWindow", "Korean", 0)
        );
        allLangCheck->setText(QApplication::translate("MainWindow", "Copy to all languages automatically", 0));
        label_60->setText(QApplication::translate("MainWindow", "Type:", 0));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Regular NPC", 0)
         << QApplication::translate("MainWindow", "Team mate", 0)
         << QApplication::translate("MainWindow", "XV1 Hero (val=2)", 0)
         << QApplication::translate("MainWindow", "XV1 Hero (val=3)", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(infoTab), QApplication::translate("MainWindow", "Info", 0));
        equipCopyButton->setText(QApplication::translate("MainWindow", "Copy Equip/Looks", 0));
        label_4->setText(QApplication::translate("MainWindow", "Face (forehead):", 0));
        label_6->setText(QApplication::translate("MainWindow", "Accesory:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Face (base):", 0));
        label_8->setText(QApplication::translate("MainWindow", "Eyes:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Nose:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Ears:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Hair:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Top:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Bottom:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Gloves:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Shoes:", 0));
        label_16->setText(QApplication::translate("MainWindow", "Body shape:", 0));
        label_17->setText(QApplication::translate("MainWindow", "Skin color (1):", 0));
        label_18->setText(QApplication::translate("MainWindow", "Skin color (2):", 0));
        label_19->setText(QApplication::translate("MainWindow", "Skin color (3):", 0));
        label_20->setText(QApplication::translate("MainWindow", "Skin color (4):", 0));
        label_21->setText(QApplication::translate("MainWindow", "Hair color:", 0));
        label_22->setText(QApplication::translate("MainWindow", "Eyes color:", 0));
        label_23->setText(QApplication::translate("MainWindow", "Top color (1):", 0));
        label_24->setText(QApplication::translate("MainWindow", "Top color (2):", 0));
        label_25->setText(QApplication::translate("MainWindow", "Top color (3):", 0));
        label_26->setText(QApplication::translate("MainWindow", "Top color (4):", 0));
        label_27->setText(QApplication::translate("MainWindow", "Bottom color (1):", 0));
        label_28->setText(QApplication::translate("MainWindow", "Bottom color (2):", 0));
        label_29->setText(QApplication::translate("MainWindow", "Bottom color (3):", 0));
        label_30->setText(QApplication::translate("MainWindow", "Bottom color (4):", 0));
        label_31->setText(QApplication::translate("MainWindow", "Gloves color (1):", 0));
        label_32->setText(QApplication::translate("MainWindow", "Gloves color (2):", 0));
        label_33->setText(QApplication::translate("MainWindow", "Gloves color (3):", 0));
        label_34->setText(QApplication::translate("MainWindow", "Gloves color (4):", 0));
        label_35->setText(QApplication::translate("MainWindow", "Shoes color (1):", 0));
        label_36->setText(QApplication::translate("MainWindow", "Shoes color (2):", 0));
        label_37->setText(QApplication::translate("MainWindow", "Shoes color (3):", 0));
        label_38->setText(QApplication::translate("MainWindow", "Shoes color (4):", 0));
        label_39->setText(QApplication::translate("MainWindow", "Make up color (1):", 0));
        label_40->setText(QApplication::translate("MainWindow", "Make up color (2):", 0));
        label_41->setText(QApplication::translate("MainWindow", "Make up color (3):", 0));
        label_42->setText(QApplication::translate("MainWindow", "Talisman:", 0));
        skinColor1Button->setText(QString());
        skinColor2Button->setText(QString());
        skinColor3Button->setText(QString());
        skinColor4Button->setText(QString());
        hairColorButton->setText(QString());
        eyesColorButton->setText(QString());
        topColor1Button->setText(QString());
        topColor2Button->setText(QString());
        topColor3Button->setText(QString());
        topColor4Button->setText(QString());
        bottomColor1Button->setText(QString());
        bottomColor2Button->setText(QString());
        bottomColor3Button->setText(QString());
        bottomColor4Button->setText(QString());
        glovesColor1Button->setText(QString());
        glovesColor2Button->setText(QString());
        glovesColor3Button->setText(QString());
        glovesColor4Button->setText(QString());
        shoesColor1Button->setText(QString());
        shoesColor2Button->setText(QString());
        shoesColor3Button->setText(QString());
        shoesColor4Button->setText(QString());
        makeupColor1Button->setText(QString());
        makeupColor2Button->setText(QString());
        makeupColor3Button->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(equipTab), QApplication::translate("MainWindow", "Equipment/Looks", 0));
        statsCopyButton->setText(QApplication::translate("MainWindow", "Copy Stats/Skills", 0));
        label_43->setText(QApplication::translate("MainWindow", "Level:", 0));
        label_44->setText(QApplication::translate("MainWindow", "U_0E:", 0));
        label_45->setText(QApplication::translate("MainWindow", "HEA:", 0));
        label_46->setText(QApplication::translate("MainWindow", "KI:", 0));
        label_47->setText(QApplication::translate("MainWindow", "STM:", 0));
        label_48->setText(QApplication::translate("MainWindow", "ATK:", 0));
        label_49->setText(QApplication::translate("MainWindow", "STR:", 0));
        label_50->setText(QApplication::translate("MainWindow", "BLA:", 0));
        label_51->setText(QApplication::translate("MainWindow", "Super 1:", 0));
        label_52->setText(QApplication::translate("MainWindow", "Super 2:", 0));
        label_53->setText(QApplication::translate("MainWindow", "Super 3:", 0));
        label_54->setText(QApplication::translate("MainWindow", "Super 4:", 0));
        label_55->setText(QApplication::translate("MainWindow", "Ultimate 1:", 0));
        label_56->setText(QApplication::translate("MainWindow", "Ultimate 2:", 0));
        label_57->setText(QApplication::translate("MainWindow", "Evasive:", 0));
        label_58->setText(QApplication::translate("MainWindow", "Blast:", 0));
        label_59->setText(QApplication::translate("MainWindow", "Awaken:", 0));
        tabWidget->setTabText(tabWidget->indexOf(statsTab), QApplication::translate("MainWindow", "Stats/Skills", 0));
        addButton->setText(QApplication::translate("MainWindow", "Add", 0));
        removeButton->setText(QApplication::translate("MainWindow", "Remove", 0));
        copyButton->setText(QApplication::translate("MainWindow", "Copy", 0));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">&lt;-- Apply me before leaving or nothing will be changed.</span></p></body></html>", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

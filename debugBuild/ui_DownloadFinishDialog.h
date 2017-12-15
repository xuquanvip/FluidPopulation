/********************************************************************************
** Form generated from reading UI file 'DownloadFinishDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADFINISHDIALOG_H
#define UI_DOWNLOADFINISHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadFinishDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *DialogTitleLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *titleLayout;
    QPushButton *dialogCloseBtn;
    QWidget *DialogBodyLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *filePathText;
    QPushButton *openPathBtn;

    void setupUi(QDialog *DownloadFinishDialog)
    {
        if (DownloadFinishDialog->objectName().isEmpty())
            DownloadFinishDialog->setObjectName(QStringLiteral("DownloadFinishDialog"));
        DownloadFinishDialog->resize(286, 128);
        DownloadFinishDialog->setWindowOpacity(0.8);
        verticalLayout_2 = new QVBoxLayout(DownloadFinishDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        DialogTitleLayout = new QWidget(DownloadFinishDialog);
        DialogTitleLayout->setObjectName(QStringLiteral("DialogTitleLayout"));
        DialogTitleLayout->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_2 = new QHBoxLayout(DialogTitleLayout);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleLayout = new QHBoxLayout();
        titleLayout->setObjectName(QStringLiteral("titleLayout"));

        horizontalLayout_2->addLayout(titleLayout);

        dialogCloseBtn = new QPushButton(DialogTitleLayout);
        dialogCloseBtn->setObjectName(QStringLiteral("dialogCloseBtn"));
        dialogCloseBtn->setMaximumSize(QSize(22, 22));

        horizontalLayout_2->addWidget(dialogCloseBtn);


        verticalLayout_2->addWidget(DialogTitleLayout);

        DialogBodyLayout = new QWidget(DownloadFinishDialog);
        DialogBodyLayout->setObjectName(QStringLiteral("DialogBodyLayout"));
        verticalLayout = new QVBoxLayout(DialogBodyLayout);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        filePathText = new QLabel(DialogBodyLayout);
        filePathText->setObjectName(QStringLiteral("filePathText"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        filePathText->setFont(font);
        filePathText->setStyleSheet(QLatin1String("margin:10px;\n"
"text-algin:center;\n"
"color: rgb(50, 64, 78);"));
        filePathText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(filePathText);

        openPathBtn = new QPushButton(DialogBodyLayout);
        openPathBtn->setObjectName(QStringLiteral("openPathBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openPathBtn->sizePolicy().hasHeightForWidth());
        openPathBtn->setSizePolicy(sizePolicy);
        openPathBtn->setCursor(QCursor(Qt::PointingHandCursor));
        openPathBtn->setStyleSheet(QLatin1String("border-image: url(:/app/images/btn.png);\n"
"color:#ffffff;\n"
"height:30px;"));

        verticalLayout->addWidget(openPathBtn);


        verticalLayout_2->addWidget(DialogBodyLayout);


        retranslateUi(DownloadFinishDialog);

        QMetaObject::connectSlotsByName(DownloadFinishDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadFinishDialog)
    {
        DownloadFinishDialog->setWindowTitle(QApplication::translate("DownloadFinishDialog", "Dialog", 0));
        dialogCloseBtn->setText(QString());
        filePathText->setText(QApplication::translate("DownloadFinishDialog", "TextLabel", 0));
        openPathBtn->setText(QApplication::translate("DownloadFinishDialog", "\346\211\223\345\274\200", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloadFinishDialog: public Ui_DownloadFinishDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADFINISHDIALOG_H

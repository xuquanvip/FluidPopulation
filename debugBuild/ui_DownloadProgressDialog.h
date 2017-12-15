/********************************************************************************
** Form generated from reading UI file 'DownloadProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADPROGRESSDIALOG_H
#define UI_DOWNLOADPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadProgressDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *DialogTitleLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *titleLayout;
    QPushButton *dialogCloseBtn;
    QWidget *DialogBodyLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *stopBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *DownloadProgressDialog)
    {
        if (DownloadProgressDialog->objectName().isEmpty())
            DownloadProgressDialog->setObjectName(QStringLiteral("DownloadProgressDialog"));
        DownloadProgressDialog->resize(320, 110);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DownloadProgressDialog->sizePolicy().hasHeightForWidth());
        DownloadProgressDialog->setSizePolicy(sizePolicy);
        DownloadProgressDialog->setMaximumSize(QSize(320, 110));
        verticalLayout_2 = new QVBoxLayout(DownloadProgressDialog);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        DialogTitleLayout = new QWidget(DownloadProgressDialog);
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

        DialogBodyLayout = new QWidget(DownloadProgressDialog);
        DialogBodyLayout->setObjectName(QStringLiteral("DialogBodyLayout"));
        verticalLayout = new QVBoxLayout(DialogBodyLayout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        progressBar = new QProgressBar(DialogBodyLayout);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stopBtn = new QPushButton(DialogBodyLayout);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stopBtn->sizePolicy().hasHeightForWidth());
        stopBtn->setSizePolicy(sizePolicy1);
        stopBtn->setCursor(QCursor(Qt::PointingHandCursor));
        stopBtn->setStyleSheet(QLatin1String("border-image: url(:/app/images/btn.png);\n"
"color:#ffffff;\n"
"height:30px;"));
        stopBtn->setAutoDefault(true);

        horizontalLayout->addWidget(stopBtn);

        cancelBtn = new QPushButton(DialogBodyLayout);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        sizePolicy1.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy1);
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn->setStyleSheet(QLatin1String("border-image: url(:/app/images/btn.png);\n"
"color:#ffffff;\n"
"height:30px;"));
        cancelBtn->setAutoDefault(true);

        horizontalLayout->addWidget(cancelBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(DialogBodyLayout);


        retranslateUi(DownloadProgressDialog);

        QMetaObject::connectSlotsByName(DownloadProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadProgressDialog)
    {
        DownloadProgressDialog->setWindowTitle(QApplication::translate("DownloadProgressDialog", "Dialog", 0));
        dialogCloseBtn->setText(QString());
        stopBtn->setText(QApplication::translate("DownloadProgressDialog", "\345\201\234\346\255\242", 0));
        cancelBtn->setText(QApplication::translate("DownloadProgressDialog", "\345\217\226\346\266\210\344\270\213\350\275\275", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloadProgressDialog: public Ui_DownloadProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADPROGRESSDIALOG_H

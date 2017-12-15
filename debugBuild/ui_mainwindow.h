/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionSendMessage;
    QAction *actionLoadHtml;
    QAction *actionReadCardTest;
    QAction *actionCvr100;
    QAction *actionQuit;
    QAction *actionUsbCardTest;
    QAction *actionCvr100Test;
    QAction *actionDebugTools;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *appHeadWidget;
    QHBoxLayout *appHeadLayout;
    QHBoxLayout *appTitleLayout;
    QWidget *appHeadButtonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *showDownloadBtn;
    QPushButton *sysMenuBtn;
    QPushButton *minWindowBtn;
    QPushButton *maxWindowBtn;
    QPushButton *closeWindowBtn;
    QWidget *buttonWidget;
    QHBoxLayout *button_nav_layout;
    QPushButton *backButton;
    QPushButton *forwardButton;
    QLineEdit *lineEdit;
    QPushButton *reloadButton;
    QPushButton *stopButton;
    QWidget *web_view;
    QVBoxLayout *web_view_layout;
    QWidget *splash_view;
    QLabel *splash_image;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSendMessage = new QAction(MainWindow);
        actionSendMessage->setObjectName(QStringLiteral("actionSendMessage"));
        actionSendMessage->setEnabled(true);
        actionLoadHtml = new QAction(MainWindow);
        actionLoadHtml->setObjectName(QStringLiteral("actionLoadHtml"));
        actionReadCardTest = new QAction(MainWindow);
        actionReadCardTest->setObjectName(QStringLiteral("actionReadCardTest"));
        actionCvr100 = new QAction(MainWindow);
        actionCvr100->setObjectName(QStringLiteral("actionCvr100"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionUsbCardTest = new QAction(MainWindow);
        actionUsbCardTest->setObjectName(QStringLiteral("actionUsbCardTest"));
        actionCvr100Test = new QAction(MainWindow);
        actionCvr100Test->setObjectName(QStringLiteral("actionCvr100Test"));
        actionDebugTools = new QAction(MainWindow);
        actionDebugTools->setObjectName(QStringLiteral("actionDebugTools"));
        actionDebugTools->setCheckable(true);
        actionDebugTools->setChecked(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMouseTracking(false);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 1, 2, 2);
        appHeadWidget = new QWidget(centralwidget);
        appHeadWidget->setObjectName(QStringLiteral("appHeadWidget"));
        appHeadWidget->setMaximumSize(QSize(16777215, 28));
        appHeadWidget->setMouseTracking(true);
        appHeadLayout = new QHBoxLayout(appHeadWidget);
        appHeadLayout->setSpacing(0);
        appHeadLayout->setObjectName(QStringLiteral("appHeadLayout"));
        appHeadLayout->setContentsMargins(2, 1, 2, 0);
        appTitleLayout = new QHBoxLayout();
        appTitleLayout->setObjectName(QStringLiteral("appTitleLayout"));
        appTitleLayout->setContentsMargins(-1, -1, 6, -1);

        appHeadLayout->addLayout(appTitleLayout);

        appHeadButtonWidget = new QWidget(appHeadWidget);
        appHeadButtonWidget->setObjectName(QStringLiteral("appHeadButtonWidget"));
        appHeadButtonWidget->setMaximumSize(QSize(128, 16777215));
        horizontalLayout = new QHBoxLayout(appHeadButtonWidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        showDownloadBtn = new QPushButton(appHeadButtonWidget);
        showDownloadBtn->setObjectName(QStringLiteral("showDownloadBtn"));
        showDownloadBtn->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(showDownloadBtn);

        sysMenuBtn = new QPushButton(appHeadButtonWidget);
        sysMenuBtn->setObjectName(QStringLiteral("sysMenuBtn"));
        sysMenuBtn->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(sysMenuBtn);

        minWindowBtn = new QPushButton(appHeadButtonWidget);
        minWindowBtn->setObjectName(QStringLiteral("minWindowBtn"));
        minWindowBtn->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(minWindowBtn);

        maxWindowBtn = new QPushButton(appHeadButtonWidget);
        maxWindowBtn->setObjectName(QStringLiteral("maxWindowBtn"));
        maxWindowBtn->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(maxWindowBtn);

        closeWindowBtn = new QPushButton(appHeadButtonWidget);
        closeWindowBtn->setObjectName(QStringLiteral("closeWindowBtn"));
        closeWindowBtn->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(closeWindowBtn);


        appHeadLayout->addWidget(appHeadButtonWidget);


        verticalLayout->addWidget(appHeadWidget);

        buttonWidget = new QWidget(centralwidget);
        buttonWidget->setObjectName(QStringLiteral("buttonWidget"));
        buttonWidget->setMaximumSize(QSize(16777215, 50));
        buttonWidget->setMouseTracking(true);
        button_nav_layout = new QHBoxLayout(buttonWidget);
        button_nav_layout->setSpacing(0);
        button_nav_layout->setObjectName(QStringLiteral("button_nav_layout"));
        button_nav_layout->setContentsMargins(6, 4, 6, 4);
        backButton = new QPushButton(buttonWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        button_nav_layout->addWidget(backButton);

        forwardButton = new QPushButton(buttonWidget);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setEnabled(false);
        sizePolicy.setHeightForWidth(forwardButton->sizePolicy().hasHeightForWidth());
        forwardButton->setSizePolicy(sizePolicy);

        button_nav_layout->addWidget(forwardButton);

        lineEdit = new QLineEdit(buttonWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        button_nav_layout->addWidget(lineEdit);

        reloadButton = new QPushButton(buttonWidget);
        reloadButton->setObjectName(QStringLiteral("reloadButton"));
        reloadButton->setEnabled(false);
        sizePolicy.setHeightForWidth(reloadButton->sizePolicy().hasHeightForWidth());
        reloadButton->setSizePolicy(sizePolicy);

        button_nav_layout->addWidget(reloadButton);

        stopButton = new QPushButton(buttonWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy);

        button_nav_layout->addWidget(stopButton);


        verticalLayout->addWidget(buttonWidget);

        web_view = new QWidget(centralwidget);
        web_view->setObjectName(QStringLiteral("web_view"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(web_view->sizePolicy().hasHeightForWidth());
        web_view->setSizePolicy(sizePolicy2);
        web_view_layout = new QVBoxLayout(web_view);
        web_view_layout->setSpacing(0);
        web_view_layout->setObjectName(QStringLiteral("web_view_layout"));
        web_view_layout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(web_view);

        splash_view = new QWidget(centralwidget);
        splash_view->setObjectName(QStringLiteral("splash_view"));
        splash_image = new QLabel(splash_view);
        splash_image->setObjectName(QStringLiteral("splash_image"));
        splash_image->setGeometry(QRect(9, 9, 16, 16));
        splash_image->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(splash_view);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "cefclient", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About ...", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionSendMessage->setText(QApplication::translate("MainWindow", "IC\345\215\241\346\223\215\344\275\234\346\265\213\350\257\225", 0));
        actionLoadHtml->setText(QApplication::translate("MainWindow", "LoadHtml", 0));
        actionReadCardTest->setText(QApplication::translate("MainWindow", "readCardTest", 0));
        actionCvr100->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\346\265\213\350\257\225", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionUsbCardTest->setText(QApplication::translate("MainWindow", "IC\345\215\241\346\265\213\350\257\225", 0));
        actionCvr100Test->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\346\265\213\350\257\225", 0));
        actionDebugTools->setText(QApplication::translate("MainWindow", "\345\274\200\345\217\221\345\267\245\345\205\267", 0));
        showDownloadBtn->setText(QString());
        sysMenuBtn->setText(QString());
        minWindowBtn->setText(QString());
        maxWindowBtn->setText(QString());
        closeWindowBtn->setText(QString());
        backButton->setText(QString());
        forwardButton->setText(QString());
        reloadButton->setText(QString());
        stopButton->setText(QString());
        splash_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

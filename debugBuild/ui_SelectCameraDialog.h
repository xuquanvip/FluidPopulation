/********************************************************************************
** Form generated from reading UI file 'SelectCameraDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCAMERADIALOG_H
#define UI_SELECTCAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectCameraDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *camera_layout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SelectCameraDialog)
    {
        if (SelectCameraDialog->objectName().isEmpty())
            SelectCameraDialog->setObjectName(QStringLiteral("SelectCameraDialog"));
        SelectCameraDialog->resize(400, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SelectCameraDialog->sizePolicy().hasHeightForWidth());
        SelectCameraDialog->setSizePolicy(sizePolicy);
        SelectCameraDialog->setMinimumSize(QSize(400, 240));
        SelectCameraDialog->setMaximumSize(QSize(400, 240));
        verticalLayout_2 = new QVBoxLayout(SelectCameraDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        camera_layout = new QVBoxLayout();
        camera_layout->setObjectName(QStringLiteral("camera_layout"));

        verticalLayout->addLayout(camera_layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SelectCameraDialog);

        QMetaObject::connectSlotsByName(SelectCameraDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectCameraDialog)
    {
        SelectCameraDialog->setWindowTitle(QApplication::translate("SelectCameraDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectCameraDialog: public Ui_SelectCameraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCAMERADIALOG_H
